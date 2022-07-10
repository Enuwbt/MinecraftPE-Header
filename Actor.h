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
  return (*(void (__fastcall **)(__int64 *))(*(_DWORD *)v4 + 1004))((__int64 *)this);
}

//@return RuntimeID*
void* Actor::getRuntimeID(){
  return reinterpret_cast<void*>(*(uintptr_t*)(this + 1008));
}

bool Actor::isBaby(){
  return Actor::getStatusFlag(this + 380,11);
}

//@return BlockPos
void* getBlockPosCurrentlyStandingOn(Actor* a2,void* a3){
  int v5; // r0
  int *v6; // r11
  int v7; // r6
  int v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r9
  int v13; // r10
  int v14; // r11
  int v15; // r0
  char *v16; // r0
  int v17; // r5
  int v19; // [sp+20h] [bp-40h]
  int v20; // [sp+24h] [bp-3Ch]
  int v21; // [sp+28h] [bp-38h]
  char v23[8]; // [sp+30h] [bp-30h] BYREF
  char v24[8]; // [sp+38h] [bp-28h] BYREF
  int v25; // [sp+40h] [bp-20h]

  v5 = (*(int (__fastcall **)(int *))(*a2 + 92))(a2);
  v6 = a2 + 222;
  v7 = a2[181];
  v8 = a2[227];
  v9 = v5;
  v10 = *v6;
  v11 = v6[1];
  v12 = v6[2];
  v13 = v6[3];
  v14 = v6[4];
  if ( a3 )
  {
    v21 = v5;
    v19 = v11;
    v20 = v10;
    sub_idk1(v23, a3);
    v15 = sub_3B7CA7C(v23);
    sub_idk2(v24, v15);
    v9 = v21;
    v16 = v24;
    v11 = v19;
    v10 = v20;
    v17 = 1;
  }
  else
  {
    v16 = 0;
    v17 = 0;
  }
  sub_idk3(this, v9, v10, v11, v12, v13, v14, v8, v7, v16); sorry, unknown function called
  if ( v17 )
    sub_3B7CAE2(v23);
  return _stack_chk_guard - v25;
}
#endif //ACTOR_H
