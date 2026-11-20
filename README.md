# UE5 C++ Gameplay & Physics Interaction Sandbox

An Unreal Engine 5 C++ sandbox project focused on modular `UActorComponent` and `USceneComponent` gameplay mechanics, physics-based object manipulation, and Enhanced Input integration.

## Implemented Components & Mechanics

* **Physics Grabber (`UGrabber`)**: Custom `USceneComponent` utilizing sweep traces (`GetGrabbleInReach`) and `UPhysicsHandleComponent` to pick up, carry at a configurable `HoldDistance`, and release physics-simulating actors[cite: 11].
* **Interpolated Mover (`UMover`)**: Frame-rate-independent actor translation component using `FMath::VInterpConstantTo` driven by configurable `MoveOffset` and `MovedTime` parameters[cite: 12, 13].
* **Tag-Based Trigger Volume (`UTriggerComponent`)**: Custom `UBoxComponent` that filters overlapping actors by `FName` gameplay tags (`AcceptableActorTag`) to drive puzzle/door state transitions[cite: 18, 19].
* **Modular Weapon & Pickup System (`UTP_WeaponComponent`, `UTP_PickUpComponent`)**: Delegate-driven pickup detection (`FOnPickUp`) that dynamically attaches weapon skeletal meshes to character sockets and binds context-sensitive `EnhancedInput` mapping contexts at runtime[cite: 14, 15, 16, 17].

## Tech Stack

* **Engine**: Unreal Engine 5 (C++)
* **Systems**: `UPhysicsHandleComponent`, `EnhancedInput`, Dynamic Multicast Delegates, Component-Based Architecture
