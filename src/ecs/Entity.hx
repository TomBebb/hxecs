package ecs;

abstract Entity(Int) {
    public inline function toString(): String
        return '#${this}';
}