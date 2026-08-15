#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__SimulationMode_def.hpp"
#include "UnityEngine/zzzz__SimulationOption_def.hpp"
#include "UnityEngine/zzzz__SimulationStage_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Physics_ContactEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1812cbb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>)>(&::UnityEngine::Physics_ContactEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x1810f7760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics_ContactEventDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Physics_ContactEventDelegate::Invoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, headerArray);
}
inline ::UnityEngine::Physics_ContactEventDelegate* UnityEngine::Physics_ContactEventDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Physics_ContactEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics_ContactEventDelegate::Physics_ContactEventDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Physics.add_ContactModifyEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*)>(&::UnityEngine::Physics::add_ContactModifyEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182302690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"add_ContactModifyEvent", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.remove_ContactModifyEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*)>(&::UnityEngine::Physics::remove_ContactModifyEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1823027c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"remove_ContactModifyEvent", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContactModify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool)>(&::UnityEngine::Physics::OnSceneContactModify)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822ffc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OnSceneContactModify", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.PhysXOnSceneContactModify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool)>(&::UnityEngine::Physics::PhysXOnSceneContactModify)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182300040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"PhysXOnSceneContactModify", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::UnityEngine::Physics::get_gravity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182302770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_gravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_simulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SimulationMode (*)()>(&::UnityEngine::Physics::get_simulationMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823027b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_simulationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_invokeCollisionCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_invokeCollisionCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182302790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_invokeCollisionCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultPhysicsScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (*)()>(&::UnityEngine::Physics::get_defaultPhysicsScene)> {
  constexpr static std::size_t size = 0x7c30;
  constexpr static std::size_t addrs = 0x180e8cfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_defaultPhysicsScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182300ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182300b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182301b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1823017c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182301670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182301000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1823009b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182300c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182301530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182301150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182301290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182301cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182301a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182300d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1823013d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1823018f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1822ff630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"CapsuleCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182302480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182302360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822ff360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"BoxCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Internal_RaycastAll)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822ffba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Internal_RaycastAll", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182300380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182300330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1823004f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182300540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1823004a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1823002e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182300290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1823005a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182300840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1823006f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182300600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182300670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1823008b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1823007d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182300760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182300930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822fff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822ffff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822fffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, float_t, ::UnityEngine::SimulationStage, ::UnityEngine::SimulationOption)>(&::UnityEngine::Physics::Simulate_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1823021f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Simulate_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_reuseCollisionCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_reuseCollisionCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823027a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_reuseCollisionCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ComputePenetration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::Physics::Query_ComputePenetration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1823001a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ComputePenetration", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ComputePenetration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::Physics::ComputePenetration)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1822ff810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"ComputePenetration", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::Query_ClosestPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182300100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::ClosestPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822ff760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822fff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphereNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1822ff4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"CapsuleCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182302210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SphereCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::UnityEngine::Quaternion, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822ffdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapBoxNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822ff220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"BoxCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822ffe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapCapsuleNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetColliderByInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (*)(::UnityEngine::EntityId)>(&::UnityEngine::Physics::GetColliderByInstanceID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822ff9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetColliderByInstanceID", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetBodyByInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::EntityId)>(&::UnityEngine::Physics::GetBodyByInstanceID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822ff970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetBodyByInstanceID", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionEnter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182302160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionStay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1823021c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionExit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182302190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t)>(&::UnityEngine::Physics::OnSceneContact)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1822ffcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OnSceneContact", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ReportContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>)>(&::UnityEngine::Physics::ReportContacts)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x182301df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"ReportContacts", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetCollisionToReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Collision* (*)(::by_ref<::UnityEngine::ContactPairHeader>, ::by_ref<::UnityEngine::ContactPair>, bool)>(&::UnityEngine::Physics::GetCollisionToReport)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1822ff9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetCollisionToReport", {}, {::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::get_gravity_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182302760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_gravity_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Ray>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Physics::Internal_RaycastAll_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822ffb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Internal_RaycastAll_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822fff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, float_t, ::UnityEngine::SimulationStage, ::UnityEngine::SimulationOption)>(&::UnityEngine::Physics::Simulate_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823021e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Simulate_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ComputePenetration_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::Physics::Query_ComputePenetration_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182300190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ComputePenetration_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ClosestPoint_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::Query_ClosestPoint_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823000f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ClosestPoint_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetColliderByInstanceID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::EntityId>)>(&::UnityEngine::Physics::GetColliderByInstanceID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822ff9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetColliderByInstanceID_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetBodyByInstanceID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::EntityId>)>(&::UnityEngine::Physics::GetBodyByInstanceID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822ff960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetBodyByInstanceID_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionEnter_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionEnter_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182302150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionEnter_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionStay_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionStay_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823021b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionStay_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionExit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionExit_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182302180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionExit_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics::setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEvent", ::UnityEngine::Physics*>(std::forward<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>(value));
}
inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* UnityEngine::Physics::getStaticF_ContactModifyEvent()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEvent", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEventCCD", ::UnityEngine::Physics*>(std::forward<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>(value));
}
inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* UnityEngine::Physics::getStaticF_ContactModifyEventCCD()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEventCCD", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*, "GenericContactModifyEvent", ::UnityEngine::Physics*>(std::forward<::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*>(value));
}
inline ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>* UnityEngine::Physics::getStaticF_GenericContactModifyEvent()  {
return ::cordl_internals::getStaticField<::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*, "GenericContactModifyEvent", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Physics_ContactEventDelegate*, "ContactEvent", ::UnityEngine::Physics*>(std::forward<::UnityEngine::Physics_ContactEventDelegate*>(value));
}
inline ::UnityEngine::Physics_ContactEventDelegate* UnityEngine::Physics::getStaticF_ContactEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Physics_ContactEventDelegate*, "ContactEvent", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Collision*, "s_ReusableCollision", ::UnityEngine::Physics*>(std::forward<::UnityEngine::Collision*>(value));
}
inline ::UnityEngine::Collision* UnityEngine::Physics::getStaticF_s_ReusableCollision()  {
return ::cordl_internals::getStaticField<::UnityEngine::Collision*, "s_ReusableCollision", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"add_ContactModifyEvent", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"remove_ContactModifyEvent", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OnSceneContactModify", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, buffer, count, isCCD);
}
inline void UnityEngine::Physics::PhysXOnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"PhysXOnSceneContactModify", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, buffer, count, isCCD);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::get_gravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_gravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline ::UnityEngine::SimulationMode UnityEngine::Physics::get_simulationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_simulationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SimulationMode>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics::get_invokeCollisionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_invokeCollisionCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::PhysicsScene UnityEngine::Physics::get_defaultPhysicsScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_defaultPhysicsScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"CapsuleCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"BoxCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Internal_RaycastAll", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, position, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, position, radius, layerMask);
}
inline void UnityEngine::Physics::Simulate_Internal(::UnityEngine::PhysicsScene  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Simulate_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, step, stages, options);
}
inline bool UnityEngine::Physics::get_reuseCollisionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_reuseCollisionCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics::Query_ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ComputePenetration", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
}
inline bool UnityEngine::Physics::ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"ComputePenetration", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::Query_ClosestPoint(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, collider, position, rotation, point);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::ClosestPoint(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, collider, position, rotation);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphereNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"CapsuleCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SphereCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapBoxNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"BoxCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, direction, results, orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapCapsuleNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point0, point1, radius, results, layerMask, queryTriggerInteraction);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Physics::GetColliderByInstanceID(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetColliderByInstanceID", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(nullptr, ___internal_method, entityId);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Physics::GetBodyByInstanceID(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetBodyByInstanceID", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, entityId);
}
inline void UnityEngine::Physics::SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OnSceneContact", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, buffer, count);
}
inline void UnityEngine::Physics::ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"ReportContacts", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::Collision* UnityEngine::Physics::GetCollisionToReport(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetCollisionToReport", {}, {::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Collision*>(nullptr, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Physics::get_gravity_Injected(::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"get_gravity_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::Internal_RaycastAll_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Internal_RaycastAll_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask, queryTriggerInteraction, ret);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"OverlapSphere_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline void UnityEngine::Physics::Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Simulate_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, step, stages, options);
}
inline bool UnityEngine::Physics::Query_ComputePenetration_Injected(::System::IntPtr  colliderA, ::by_ref<::UnityEngine::Vector3>  positionA, ::by_ref<::UnityEngine::Quaternion>  rotationA, ::System::IntPtr  colliderB, ::by_ref<::UnityEngine::Vector3>  positionB, ::by_ref<::UnityEngine::Quaternion>  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ComputePenetration_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
}
inline void UnityEngine::Physics::Query_ClosestPoint_Injected(::System::IntPtr  collider, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"Query_ClosestPoint_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider, position, rotation, point, ret);
}
inline ::System::IntPtr UnityEngine::Physics::GetColliderByInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetColliderByInstanceID_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, entityId);
}
inline ::System::IntPtr UnityEngine::Physics::GetBodyByInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"GetBodyByInstanceID_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, entityId);
}
inline void UnityEngine::Physics::SendOnCollisionEnter_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionEnter_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionStay_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionStay_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionExit_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics*>(),
                        {"SendOnCollisionExit_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics::Physics()   {
}
