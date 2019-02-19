package ecs;

import ecs.System;

class World {
    private var entities: Array<Entity>;
    private var runSystems: RunSystem;
    private var entityCounter: Int = 0;

    public inline function createEntity(): Entity {
        var entity: Entity = cast entityCounter++;
        entities.push(entity);
        return entity;
    }

    public inline function removeEntity(ent: Entity) {
        entities.remove(ent);
    }
    public function run() {
        for(sys in runSystems)
            sys.run();
    }
}