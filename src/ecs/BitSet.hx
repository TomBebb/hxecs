package ecs;

import haxe.ds.Vector;

class BitSet {
    var data: Vector<Int>;
    
    public var capacity(get, never): Int;
    inline function get_capacity(): Int
        return data.length << 5;
    public var bitsUsed: Int = 0;

    public inline function new(initialCapacity: Int = 32) {
        data = new Vector<Int>(initialCapacity >> 5);
        trace(initialCapacity >> 5);
    }

    public inline function has(bit: Int): Bool
        return (data[calcIntIndex(bit)] & (1 << calcBitOffsetInInt(bit))) != 0;

    public function set(bit: Int): Void {
        ensureCapacity(bit + 1);
        if(bit + 1 > bitsUsed)
            bitsUsed = bit + 1;

        var intIndex = calcIntIndex(bit);
        var offset = calcBitOffsetInInt(bit);
        trace('Bit ${bit} is at offset ${offset} in index ${intIndex} with capacity ${capacity}');
        data[intIndex] |= (1 << offset);
    }

    public inline function clear(bit: Int): Void
        (data[calcIntIndex(bit)] &= ~(1 << calcBitOffsetInInt(bit)));

    public inline function clearAll(): Void
        for(i in 0...data.length)
            data[i] = 0;
    public inline function setAll(): Void
        for(i in 0...data.length)
            data[i] = (1 << 32) - 1;

    function ensureCapacity(newCapacity: Int)
    {
        trace('Current capacity: ${capacity}; new capacity: ${newCapacity} => ${calcIntIndex(newCapacity)}');
        if (newCapacity < capacity)
            return;

        var newData = new Vector<Int>(calcIntIndex(newCapacity));
        Vector.blit(data, 0, newData, 0, data.length);
        data = newData;
    }

    public static inline function calcIntIndex(bit: Int)
        return bit >> 5;

    public static inline function calcBitOffsetInInt(bit: Int)
        return bit & ((1 << 5) - 1);
}