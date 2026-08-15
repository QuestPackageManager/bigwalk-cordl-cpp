#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/Spline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplineOffset_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__Spline_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__IReceiveSplineChangeMessages_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplineOffset_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePoint_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__Spline_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline_DebugFields::*)()>(&::WaveHarmonic::Crest::Splines::Spline_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::Splines::Spline_DebugFields::__cordl_internal_get__UpdateEveryFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateEveryFrame;
}
constexpr bool const& WaveHarmonic::Crest::Splines::Spline_DebugFields::__cordl_internal_get__UpdateEveryFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateEveryFrame;
}
constexpr void WaveHarmonic::Crest::Splines::Spline_DebugFields::__cordl_internal_set__UpdateEveryFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateEveryFrame = value;
}
inline void WaveHarmonic::Crest::Splines::Spline_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::Spline_DebugFields* WaveHarmonic::Crest::Splines::Spline_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::Spline_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::Spline_DebugFields::Spline_DebugFields()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::get_Closed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Closed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.set_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)(bool)>(&::WaveHarmonic::Crest::Splines::Spline::set_Closed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Closed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Splines::SplineOffset (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::get_Offset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)(::WaveHarmonic::Crest::Splines::SplineOffset)>(&::WaveHarmonic::Crest::Splines::Spline::set_Offset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Offset", {}, {::i2c::type_of<::WaveHarmonic::Crest::Splines::SplineOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::get_Radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)(float_t)>(&::WaveHarmonic::Crest::Splines::Spline::set_Radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.get_Subdivisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::get_Subdivisions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180de9ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Subdivisions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.set_Subdivisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)(int32_t)>(&::WaveHarmonic::Crest::Splines::Spline::set_Subdivisions)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180de9f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Subdivisions", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.get_HasSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::get_HasSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f3820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_HasSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.HasSplinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::HasSplinePoints)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18256fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"HasSplinePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.NotifyReceivers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::WaveHarmonic::Crest::Splines::Spline::NotifyReceivers)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1825703b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"NotifyReceivers", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.UpdateSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::UpdateSpline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182570f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"UpdateSpline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182570640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825705e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::Initialize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1825702d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.InitializeFromContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::InitializeFromContainer)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18256ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"InitializeFromContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline.OnSplineChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)(::UnityEngine::Splines::Spline*, int32_t, ::UnityEngine::Splines::SplineModification)>(&::WaveHarmonic::Crest::Splines::Spline::OnSplineChanged)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x1825706c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::Spline::*)()>(&::WaveHarmonic::Crest::Splines::Spline::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182571020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr void WaveHarmonic::Crest::Splines::Spline::__cordl_internal_set__Source(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Source = value;
}
constexpr ::WaveHarmonic::Crest::Splines::SplineOffset& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset;
}
constexpr ::WaveHarmonic::Crest::Splines::SplineOffset const& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset;
}
constexpr void WaveHarmonic::Crest::Splines::Spline::__cordl_internal_set__Offset(::WaveHarmonic::Crest::Splines::SplineOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Offset = value;
}
constexpr bool& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Closed;
}
constexpr bool const& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Closed;
}
constexpr void WaveHarmonic::Crest::Splines::Spline::__cordl_internal_set__Closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Closed = value;
}
constexpr float_t& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Radius;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Radius;
}
constexpr void WaveHarmonic::Crest::Splines::Spline::__cordl_internal_set__Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Radius = value;
}
constexpr int32_t& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Subdivisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subdivisions;
}
constexpr int32_t const& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Subdivisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subdivisions;
}
constexpr void WaveHarmonic::Crest::Splines::Spline::__cordl_internal_set__Subdivisions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Subdivisions = value;
}
constexpr ::WaveHarmonic::Crest::Splines::Spline_DebugFields*& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::Splines::Spline_DebugFields* const& WaveHarmonic::Crest::Splines::Spline::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::Splines::Spline::__cordl_internal_set__Debug(::WaveHarmonic::Crest::Splines::Spline_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
inline void WaveHarmonic::Crest::Splines::Spline::setStaticF_s_Inputs(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*, "s_Inputs", ::WaveHarmonic::Crest::Splines::Spline*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>* WaveHarmonic::Crest::Splines::Spline::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*, "s_Inputs", ::WaveHarmonic::Crest::Splines::Spline*>();
}
inline void WaveHarmonic::Crest::Splines::Spline::setStaticF_s_Receivers(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>*, "s_Receivers", ::WaveHarmonic::Crest::Splines::Spline*>(std::forward<::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>*>(value));
}
inline ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>* WaveHarmonic::Crest::Splines::Spline::getStaticF_s_Receivers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>*, "s_Receivers", ::WaveHarmonic::Crest::Splines::Spline*>();
}
inline void WaveHarmonic::Crest::Splines::Spline::setStaticF_s_Points(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, "s_Points", ::WaveHarmonic::Crest::Splines::Spline*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>* WaveHarmonic::Crest::Splines::Spline::getStaticF_s_Points()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, "s_Points", ::WaveHarmonic::Crest::Splines::Spline*>();
}
inline bool WaveHarmonic::Crest::Splines::Spline::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::set_Closed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Closed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::Splines::SplineOffset WaveHarmonic::Crest::Splines::Spline::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Splines::SplineOffset>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::set_Offset(::WaveHarmonic::Crest::Splines::SplineOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Offset", {}, {::i2c::type_of<::WaveHarmonic::Crest::Splines::SplineOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Splines::Spline::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::Splines::Spline::get_Subdivisions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_Subdivisions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::set_Subdivisions(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"set_Subdivisions", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::Splines::Spline::get_HasSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"get_HasSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Splines::Spline::HasSplinePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"HasSplinePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::NotifyReceivers(::UnityEngine::Transform*  sibling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"NotifyReceivers", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sibling);
}
inline void WaveHarmonic::Crest::Splines::Spline::UpdateSpline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"UpdateSpline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::InitializeFromContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"InitializeFromContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::Spline::OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  index, ::UnityEngine::Splines::SplineModification  modification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, index, modification);
}
inline void WaveHarmonic::Crest::Splines::Spline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::Spline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::Spline* WaveHarmonic::Crest::Splines::Spline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::Spline*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::Spline::Spline()   {
}
