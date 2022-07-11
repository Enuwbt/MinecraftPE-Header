#ifndef ACTOR_H
#define ACTOR_H

class Actor {
public:
  void* getUniqueID();
  void* getRuntimeID();
  bool isBaby();
  void* getBlockPosCurrentlyStandingOn(Actor*,void*);
};

//@return UniqueID*
void* Actor::getUniqueID(){
  int v4 = *(uintptr_t*)(this + 732);
  return (*(void (**)(int64 *))(*(uintptr_t *)v4 + 1004))((int64 *)this);
}

//@return RuntimeID*
void* Actor::getRuntimeID(){
  return reinterpret_cast<void*>(*(uintptr_t*)(this + 1008));
}

bool Actor::isBaby(){
  return Actor::getStatusFlag(this + 380,11);
}


#endif //ACTOR_H
