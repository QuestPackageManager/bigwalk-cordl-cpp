#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FloatingObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObjectModel_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObjectProbe_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObject_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObjectModel_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObjectProbe_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObject_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleFlowHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject_DebugFields::*)()>(&::WaveHarmonic::Crest::FloatingObject_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::FloatingObject_DebugFields::__cordl_internal_get__DrawQueries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawQueries;
}
constexpr bool const& WaveHarmonic::Crest::FloatingObject_DebugFields::__cordl_internal_get__DrawQueries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawQueries;
}
constexpr void WaveHarmonic::Crest::FloatingObject_DebugFields::__cordl_internal_set__DrawQueries(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawQueries = value;
}
inline void WaveHarmonic::Crest::FloatingObject_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::FloatingObject_DebugFields* WaveHarmonic::Crest::FloatingObject_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FloatingObject_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FloatingObject_DebugFields::FloatingObject_DebugFields()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_AccelerateDownhill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_AccelerateDownhill)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_AccelerateDownhill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_AccelerateDownhill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_AccelerateDownhill)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_AccelerateDownhill", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_AngularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_AngularDrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_AngularDrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_AngularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_AngularDrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180eb78a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_AngularDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_BuoyancyForceStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_BuoyancyForceStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_BuoyancyForceStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_BuoyancyForceStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_BuoyancyForceStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_BuoyancyForceStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_BuoyancyTorqueStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_BuoyancyTorqueStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_BuoyancyTorqueStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_BuoyancyTorqueStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_BuoyancyTorqueStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_BuoyancyTorqueStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_CenterToBottomOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_CenterToBottomOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_CenterToBottomOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_CenterToBottomOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_CenterToBottomOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_CenterToBottomOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_Drag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_Drag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Drag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_Drag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::FloatingObject::set_Drag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Drag", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_ForceHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_ForceHeightOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_ForceHeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_ForceHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_ForceHeightOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_ForceHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::CollisionLayer (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::FloatingObject::set_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Layer", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_MaximumBuoyancyForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_MaximumBuoyancyForce)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_MaximumBuoyancyForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_MaximumBuoyancyForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_MaximumBuoyancyForce)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_MaximumBuoyancyForce", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_Model
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::FloatingObjectModel (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_Model)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Model", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_Model
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(::WaveHarmonic::Crest::FloatingObjectModel)>(&::WaveHarmonic::Crest::FloatingObject::set_Model)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Model", {}, {::i2c::type_of<::WaveHarmonic::Crest::FloatingObjectModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_ObjectLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_ObjectLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181520640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_ObjectLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_ObjectLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_ObjectLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_ObjectLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_ObjectWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_ObjectWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_ObjectWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_ObjectWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(float_t)>(&::WaveHarmonic::Crest::FloatingObject::set_ObjectWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_ObjectWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_Probes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_Probes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Probes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_Probes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>)>(&::WaveHarmonic::Crest::FloatingObject::set_Probes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Probes", {}, {::i2c::type_of<::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_RigidBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_RigidBody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_RigidBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_RigidBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(::UnityEngine::Rigidbody*)>(&::WaveHarmonic::Crest::FloatingObject::set_RigidBody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_RigidBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_UseObjectLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_UseObjectLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_UseObjectLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_UseObjectLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(bool)>(&::WaveHarmonic::Crest::FloatingObject::set_UseObjectLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_UseObjectLength", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_InWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_InWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_InWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.set_InWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(bool)>(&::WaveHarmonic::Crest::FloatingObject::set_InWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_InWater", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_Advanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_Advanced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Advanced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::OnStart)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18258d1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.get_OnFixedUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::get_OnFixedUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject.OnFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::FloatingObject::OnFixedUpdate)> {
  constexpr static std::size_t size = 0x1570;
  constexpr static std::size_t addrs = 0x18258bc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"OnFixedUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FloatingObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FloatingObject::*)()>(&::WaveHarmonic::Crest::FloatingObject::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18258d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__RigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__RigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RigidBody;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__RigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RigidBody = value;
}
constexpr ::WaveHarmonic::Crest::FloatingObjectModel& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Model;
}
constexpr ::WaveHarmonic::Crest::FloatingObjectModel const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Model;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__Model(::WaveHarmonic::Crest::FloatingObjectModel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Model = value;
}
constexpr ::WaveHarmonic::Crest::CollisionLayer& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr ::WaveHarmonic::Crest::CollisionLayer const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__Layer(::WaveHarmonic::Crest::CollisionLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__BuoyancyForceStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyForceStrength;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__BuoyancyForceStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyForceStrength;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__BuoyancyForceStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BuoyancyForceStrength = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__BuoyancyTorqueStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyTorqueStrength;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__BuoyancyTorqueStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyTorqueStrength;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__BuoyancyTorqueStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BuoyancyTorqueStrength = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__MaximumBuoyancyForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumBuoyancyForce;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__MaximumBuoyancyForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumBuoyancyForce;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__MaximumBuoyancyForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumBuoyancyForce = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__CenterToBottomOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterToBottomOffset;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__CenterToBottomOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterToBottomOffset;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__CenterToBottomOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CenterToBottomOffset = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__AccelerateDownhill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccelerateDownhill;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__AccelerateDownhill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccelerateDownhill;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__AccelerateDownhill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AccelerateDownhill = value;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Probes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Probes;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Probes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Probes;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__Probes(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Probes = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Drag;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Drag;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__Drag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Drag = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__AngularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AngularDrag;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__AngularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AngularDrag;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__AngularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AngularDrag = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__ForceHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceHeightOffset;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__ForceHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceHeightOffset;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__ForceHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceHeightOffset = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__ObjectWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectWidth;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__ObjectWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectWidth;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__ObjectWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjectWidth = value;
}
constexpr bool& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__UseObjectLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseObjectLength;
}
constexpr bool const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__UseObjectLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseObjectLength;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__UseObjectLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseObjectLength = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__ObjectLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectLength;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__ObjectLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectLength;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__ObjectLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjectLength = value;
}
constexpr ::WaveHarmonic::Crest::FloatingObject_DebugFields*& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::FloatingObject_DebugFields* const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__Debug(::WaveHarmonic::Crest::FloatingObject_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr bool& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__InWater_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InWater_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__InWater_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InWater_k__BackingField;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__InWater_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InWater_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__SampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__SampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelper = value;
}
constexpr ::WaveHarmonic::Crest::SampleFlowHelper*& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__SampleFlowHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleFlowHelper;
}
constexpr ::WaveHarmonic::Crest::SampleFlowHelper* const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__SampleFlowHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleFlowHelper;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__SampleFlowHelper(::WaveHarmonic::Crest::SampleFlowHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleFlowHelper = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryPoints;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__QueryPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryPoints = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryResultDisplacements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultDisplacements;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryResultDisplacements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultDisplacements;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__QueryResultDisplacements(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultDisplacements = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryResultVelocities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultVelocities;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryResultVelocities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultVelocities;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__QueryResultVelocities(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultVelocities = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryResultNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultNormal;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__QueryResultNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultNormal;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__QueryResultNormal(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultNormal = value;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Probe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Probe;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__Probe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Probe;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__Probe(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Probe = value;
}
constexpr float_t& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__TotalWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalWeight;
}
constexpr float_t const& WaveHarmonic::Crest::FloatingObject::__cordl_internal_get__TotalWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalWeight;
}
constexpr void WaveHarmonic::Crest::FloatingObject::__cordl_internal_set__TotalWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalWeight = value;
}
inline void WaveHarmonic::Crest::FloatingObject::setStaticF_s_FixedUpdateMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_FixedUpdateMarker", ::WaveHarmonic::Crest::FloatingObject*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker WaveHarmonic::Crest::FloatingObject::getStaticF_s_FixedUpdateMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_FixedUpdateMarker", ::WaveHarmonic::Crest::FloatingObject*>();
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_AccelerateDownhill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_AccelerateDownhill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_AccelerateDownhill(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_AccelerateDownhill", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_AngularDrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_AngularDrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_AngularDrag(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_AngularDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_BuoyancyForceStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_BuoyancyForceStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_BuoyancyForceStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_BuoyancyForceStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_BuoyancyTorqueStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_BuoyancyTorqueStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_BuoyancyTorqueStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_BuoyancyTorqueStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_CenterToBottomOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_CenterToBottomOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_CenterToBottomOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_CenterToBottomOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::FloatingObject::get_Drag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Drag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_Drag(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Drag", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_ForceHeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_ForceHeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_ForceHeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_ForceHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::CollisionLayer WaveHarmonic::Crest::FloatingObject::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::CollisionLayer>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_Layer(::WaveHarmonic::Crest::CollisionLayer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Layer", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_MaximumBuoyancyForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_MaximumBuoyancyForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_MaximumBuoyancyForce(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_MaximumBuoyancyForce", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::FloatingObjectModel WaveHarmonic::Crest::FloatingObject::get_Model()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Model", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::FloatingObjectModel>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_Model(::WaveHarmonic::Crest::FloatingObjectModel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Model", {}, {::i2c::type_of<::WaveHarmonic::Crest::FloatingObjectModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_ObjectLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_ObjectLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_ObjectLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_ObjectLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FloatingObject::get_ObjectWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_ObjectWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_ObjectWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_ObjectWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> WaveHarmonic::Crest::FloatingObject::get_Probes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Probes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_Probes(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_Probes", {}, {::i2c::type_of<::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rigidbody> WaveHarmonic::Crest::FloatingObject::get_RigidBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_RigidBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_RigidBody(::UnityEngine::Rigidbody*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_RigidBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::FloatingObject::get_UseObjectLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_UseObjectLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_UseObjectLength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_UseObjectLength", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::FloatingObject::get_InWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_InWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::set_InWater(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"set_InWater", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::FloatingObject::get_Advanced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"get_Advanced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::FloatingObject::get_OnFixedUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FloatingObject::OnFixedUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {"OnFixedUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::FloatingObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FloatingObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::FloatingObject* WaveHarmonic::Crest::FloatingObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FloatingObject*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FloatingObject::FloatingObject()   {
}
