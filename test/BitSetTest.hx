package;

import massive.munit.util.Timer;
import massive.munit.Assert;
import massive.munit.async.AsyncFactory;
import ecs.BitSet;

class BitSetTest {
	public function new()  {
	}
	
	@Test
	public function testAllFalseInNew() {
		var set = new BitSet();
		for(i in 0...set.capacity)
			Assert.isFalse(set.has(i));
	}
	
	@Test
	public function testAllTrueInNewSet() {
		var set = new BitSet();
		set.setAll();
		for(i in 0...set.capacity)
			Assert.isTrue(set.has(i));
	}
	
	@Test
	public function testSetGrows() {
		var set = new BitSet();
		Assert.areEqual(set.bitsUsed, 0);
		set.set(32);
		Assert.areEqual(set.bitsUsed, 33);
		Assert.isTrue(set.has(32));
		Assert.isFalse(set.has(31));
		Assert.isFalse(set.has(33));
	}
	
}