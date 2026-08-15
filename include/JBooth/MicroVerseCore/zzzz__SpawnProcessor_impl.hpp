#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SpawnProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__SpawnProcessor_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IDetailModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IObjectModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITreeModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MicroVerse_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SpawnProcessor_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor_Pool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor_Pool::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor_Pool::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18140de10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::SpawnProcessor_Pool::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::SpawnProcessor_Pool::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor_Pool::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& JBooth::MicroVerseCore::SpawnProcessor_Pool::__cordl_internal_get_instances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instances;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* const& JBooth::MicroVerseCore::SpawnProcessor_Pool::__cordl_internal_get_instances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instances;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor_Pool::__cordl_internal_set_instances(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instances = value;
}
inline void JBooth::MicroVerseCore::SpawnProcessor_Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SpawnProcessor_Pool* JBooth::MicroVerseCore::SpawnProcessor_Pool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SpawnProcessor_Pool::SpawnProcessor_Pool()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor___c::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor___c._InitSystem_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SpawnProcessor___c::*)(::JBooth::MicroVerseCore::ISpawner*)>(&::JBooth::MicroVerseCore::SpawnProcessor___c::_InitSystem_b__30_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181417c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor___c*>(),
                        {"<InitSystem>b__30_0", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ISpawner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor___c._InitSystem_b__30_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SpawnProcessor___c::*)(::JBooth::MicroVerseCore::ISpawner*)>(&::JBooth::MicroVerseCore::SpawnProcessor___c::_InitSystem_b__30_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181417c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor___c*>(),
                        {"<InitSystem>b__30_1", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ISpawner*>()}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::SpawnProcessor___c::setStaticF___9(::JBooth::MicroVerseCore::SpawnProcessor___c*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::SpawnProcessor___c*, "<>9", ::JBooth::MicroVerseCore::SpawnProcessor___c*>(std::forward<::JBooth::MicroVerseCore::SpawnProcessor___c*>(value));
}
inline ::JBooth::MicroVerseCore::SpawnProcessor___c* JBooth::MicroVerseCore::SpawnProcessor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::SpawnProcessor___c*, "<>9", ::JBooth::MicroVerseCore::SpawnProcessor___c*>();
}
inline void JBooth::MicroVerseCore::SpawnProcessor___c::setStaticF___9__30_0(::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>*, "<>9__30_0", ::JBooth::MicroVerseCore::SpawnProcessor___c*>(std::forward<::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>*>(value));
}
inline ::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>* JBooth::MicroVerseCore::SpawnProcessor___c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>*, "<>9__30_0", ::JBooth::MicroVerseCore::SpawnProcessor___c*>();
}
inline void JBooth::MicroVerseCore::SpawnProcessor___c::setStaticF___9__30_1(::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>*, "<>9__30_1", ::JBooth::MicroVerseCore::SpawnProcessor___c*>(std::forward<::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>*>(value));
}
inline ::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>* JBooth::MicroVerseCore::SpawnProcessor___c::getStaticF___9__30_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>*, "<>9__30_1", ::JBooth::MicroVerseCore::SpawnProcessor___c*>();
}
inline void JBooth::MicroVerseCore::SpawnProcessor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::SpawnProcessor___c::_InitSystem_b__30_0(::JBooth::MicroVerseCore::ISpawner*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor___c*>(),
                        {"<InitSystem>b__30_0", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ISpawner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool JBooth::MicroVerseCore::SpawnProcessor___c::_InitSystem_b__30_1(::JBooth::MicroVerseCore::ISpawner*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor___c*>(),
                        {"<InitSystem>b__30_1", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ISpawner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, member);
}
inline ::JBooth::MicroVerseCore::SpawnProcessor___c* JBooth::MicroVerseCore::SpawnProcessor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SpawnProcessor___c*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SpawnProcessor___c::SpawnProcessor___c()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.RenderObjectClearLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::SpawnProcessor::RenderObjectClearLayers)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181415c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderObjectClearLayers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.RenderObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::IObjectModifier*, ::JBooth::MicroVerseCore::MicroVerse_DataCache*, bool, bool)>(&::JBooth::MicroVerseCore::SpawnProcessor::RenderObjectStamp)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x1814160e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderObjectStamp", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::IObjectModifier*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.CancelObjectJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::SpawnProcessor::CancelObjectJobs)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181413f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"CancelObjectJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Terrain*, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, bool)>(&::JBooth::MicroVerseCore::SpawnProcessor::Spawn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814175b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.Despawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::SpawnProcessor::Despawn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814146f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"Despawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.ClearPools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::ClearPools)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181414520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ClearPools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.ApplyObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::ApplyObjects)> {
  constexpr static std::size_t size = 0xc80;
  constexpr static std::size_t addrs = 0x181412d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ApplyObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.FinishedRendereringVegetation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::JBooth::MicroVerseCore::MicroVerse_DataCache*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*)>(&::JBooth::MicroVerseCore::SpawnProcessor::FinishedRendereringVegetation)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x181414700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"FinishedRendereringVegetation", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.RenderVegetationClearLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::SpawnProcessor::RenderVegetationClearLayers)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x181416f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderVegetationClearLayers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.RenderDetailStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::IDetailModifier*, ::JBooth::MicroVerseCore::MicroVerse_DataCache*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*)>(&::JBooth::MicroVerseCore::SpawnProcessor::RenderDetailStamp)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181415980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderDetailStamp", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::IDetailModifier*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.RenderTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::ITreeModifier*, ::JBooth::MicroVerseCore::MicroVerse_DataCache*, bool, bool)>(&::JBooth::MicroVerseCore::SpawnProcessor::RenderTreeStamp)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x181416820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderTreeStamp", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::ITreeModifier*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.InitTerrainVegetation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::SpawnProcessor::InitTerrainVegetation)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181415290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"InitTerrainVegetation", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.CancelVegetationJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::SpawnProcessor::CancelVegetationJobs)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1814140f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"CancelVegetationJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.ApplyTrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::ApplyTrees)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181413a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ApplyTrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.ApplyDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::ApplyDetails)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181412a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ApplyDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.get_IsModifyingTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::get_IsModifyingTerrain)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814177c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"get_IsModifyingTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.set_IsModifyingTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::JBooth::MicroVerseCore::SpawnProcessor::set_IsModifyingTerrain)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181417800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"set_IsModifyingTerrain", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::SpawnProcessor::Cancel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181414450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"Cancel", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.InitSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::InitSystem)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814150c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"InitSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.InitTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::UnityEngine::Terrain*, ::JBooth::MicroVerseCore::MicroVerse_InvalidateType, ::by_ref<bool>, ::by_ref<bool>)>(&::JBooth::MicroVerseCore::SpawnProcessor::InitTerrain)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x181415600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"InitTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_InvalidateType>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.GenerateSpawnables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::SpawnProcessor::GenerateSpawnables)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181414d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"GenerateSpawnables", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor.CheckDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::CheckDone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181414480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"CheckDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SpawnProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SpawnProcessor::*)()>(&::JBooth::MicroVerseCore::SpawnProcessor::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181417630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_objectJobHolders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectJobHolders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_objectJobHolders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectJobHolders;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_objectJobHolders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectJobHolders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_finishedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_finishedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedObjects;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_finishedObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_treeJobHolders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeJobHolders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_treeJobHolders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeJobHolders;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_treeJobHolders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeJobHolders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_detailJobHolders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailJobHolders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_detailJobHolders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailJobHolders;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_detailJobHolders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailJobHolders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_finishedTrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedTrees;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_finishedTrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedTrees;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_finishedTrees(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedTrees = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_finishedDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedDetails;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_finishedDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedDetails;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_finishedDetails(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedDetails = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_spawners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawners;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_spawners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawners;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_spawners(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawners = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_treePrototypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treePrototypes;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_treePrototypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treePrototypes;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_treePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treePrototypes = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_detailPrototypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailPrototypes;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>* const& JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_get_detailPrototypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailPrototypes;
}
constexpr void JBooth::MicroVerseCore::SpawnProcessor::__cordl_internal_set_detailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailPrototypes = value;
}
inline void JBooth::MicroVerseCore::SpawnProcessor::setStaticF_pools(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>*, "pools", ::JBooth::MicroVerseCore::SpawnProcessor*>(std::forward<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>*>(value));
}
inline ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>* JBooth::MicroVerseCore::SpawnProcessor::getStaticF_pools()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>*, "pools", ::JBooth::MicroVerseCore::SpawnProcessor*>();
}
inline void JBooth::MicroVerseCore::SpawnProcessor::setStaticF__IsModifyingTerrain_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsModifyingTerrain>k__BackingField", ::JBooth::MicroVerseCore::SpawnProcessor*>(std::forward<bool>(value));
}
inline bool JBooth::MicroVerseCore::SpawnProcessor::getStaticF__IsModifyingTerrain_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsModifyingTerrain>k__BackingField", ::JBooth::MicroVerseCore::SpawnProcessor*>();
}
inline void JBooth::MicroVerseCore::SpawnProcessor::RenderObjectClearLayers(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderObjectClearLayers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains, dataCache);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::RenderObjectStamp(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::IObjectModifier*  objectModifier, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, bool  allSDF, bool  enableSDF)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderObjectStamp", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::IObjectModifier*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains, objectModifier, dataCache, allSDF, enableSDF);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::CancelObjectJobs(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"CancelObjectJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataCache);
}
inline ::UnityW<::UnityEngine::GameObject> JBooth::MicroVerseCore::SpawnProcessor::Spawn(::UnityEngine::Terrain*  t, ::UnityEngine::GameObject*  go, ::UnityEngine::Transform*  parent, bool  asPrefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, t, go, parent, asPrefab);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::Despawn(::UnityEngine::GameObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"Despawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::ClearPools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ClearPools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::ApplyObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ApplyObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::FinishedRendereringVegetation(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"FinishedRendereringVegetation", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataCache, resultBuffers);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::RenderVegetationClearLayers(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderVegetationClearLayers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains, dataCache);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::RenderDetailStamp(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::IDetailModifier*  detailModifier, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderDetailStamp", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::IDetailModifier*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains, detailModifier, dataCache, resultBuffers);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::RenderTreeStamp(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::ITreeModifier*  treeModifier, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, bool  allSDF, bool  enableTreeSDF)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"RenderTreeStamp", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::ITreeModifier*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains, treeModifier, dataCache, allSDF, enableTreeSDF);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::InitTerrainVegetation(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  treePrototypes, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  detailPrototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"InitTerrainVegetation", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, treePrototypes, detailPrototypes);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::CancelVegetationJobs(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"CancelVegetationJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataCache);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::ApplyTrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ApplyTrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::ApplyDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"ApplyDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::SpawnProcessor::get_IsModifyingTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"get_IsModifyingTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::set_IsModifyingTerrain(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"set_IsModifyingTerrain", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::Cancel(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"Cancel", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataCache);
}
template<typename T>
inline void JBooth::MicroVerseCore::SpawnProcessor::MoveMatchingToStart(::System::Collections::Generic::List_1<T>*  list, ::System::Func_2<T,bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                    {"MoveMatchingToStart", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, condition);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::InitSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"InitSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::InitTerrain(::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  invalidateType, ::by_ref<bool>  needCurvatureMap, ::by_ref<bool>  needFlowMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"InitTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_InvalidateType>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, invalidateType, needCurvatureMap, needFlowMap);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::GenerateSpawnables(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"GenerateSpawnables", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains, dataCache);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::CheckDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {"CheckDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SpawnProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SpawnProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SpawnProcessor* JBooth::MicroVerseCore::SpawnProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SpawnProcessor*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SpawnProcessor::SpawnProcessor()   {
}
