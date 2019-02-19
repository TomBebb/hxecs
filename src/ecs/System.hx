package ecs;

class System {
    
}
interface RunSystem {
    /**
     *  Run this system.
     */
    function run(): Void;
}
interface InitSystem {
    /**
     * Initializes system. Use this to setup internal data.
     */
    function initialize(): Void;
    /**
     * Destroys the system, freeing any associated resources.
     */
    function destroy(): Void;
}