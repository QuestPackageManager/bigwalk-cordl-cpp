#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/HableCurve.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HableCurve_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HableCurve_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Segment.Eval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve_Segment::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Segment::Eval)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fcecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>(),
                        {"Eval", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Segment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve_Segment::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Segment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_offsetX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetX;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_offsetX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetX;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_set_offsetX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetX = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_offsetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_offsetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_set_offsetY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetY = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_scaleX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleX;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_scaleX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleX;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_set_scaleX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleX = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_scaleY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleY;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_scaleY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleY;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_set_scaleY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleY = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_lnA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lnA;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_lnA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lnA;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_set_lnA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lnA = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_B()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___B;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_get_B() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___B;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::__cordl_internal_set_B(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___B = value;
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve_Segment::Eval(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>(),
                        {"Eval", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve_Segment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::HableCurve_Segment* UnityEngine::Rendering::PostProcessing::HableCurve_Segment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve_Segment::HableCurve_Segment()   {
}
// Ctor Parameters [CppParam { name: "x0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "x1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overshootX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overshootY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gamma", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve_DirectParams::HableCurve_DirectParams(float_t  x0, float_t  y0, float_t  x1, float_t  y1, float_t  W, float_t  overshootX, float_t  overshootY, float_t  gamma) noexcept  {
this->x0 = x0;
this->y0 = y0;
this->x1 = x1;
this->y1 = y1;
this->W = W;
this->overshootX = overshootX;
this->overshootY = overshootY;
this->gamma = gamma;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve_DirectParams::HableCurve_DirectParams()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)(::UnityEngine::Rendering::PostProcessing::HableCurve*)>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_curve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_curve)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_curve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_toeSegmentA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_toeSegmentA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_toeSegmentA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_toeSegmentB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_toeSegmentB)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_toeSegmentB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_midSegmentA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_midSegmentA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_midSegmentA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_midSegmentB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_midSegmentB)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_midSegmentB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_shoSegmentA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_shoSegmentA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd07f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_shoSegmentA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms.get_shoSegmentB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_shoSegmentB)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_shoSegmentB", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve*& UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve* const& UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::__cordl_internal_set_parent(::UnityEngine::Rendering::PostProcessing::HableCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::_ctor(::UnityEngine::Rendering::PostProcessing::HableCurve*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_curve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_curve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_toeSegmentA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_toeSegmentA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_toeSegmentB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_toeSegmentB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_midSegmentA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_midSegmentA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_midSegmentB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_midSegmentB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_shoSegmentA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_shoSegmentA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::get_shoSegmentB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(),
                        {"get_shoSegmentB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms* UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::New_ctor(::UnityEngine::Rendering::PostProcessing::HableCurve*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*>(parent));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms::HableCurve_Uniforms()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.get_whitePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve::get_whitePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_whitePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.set_whitePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::set_whitePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_whitePoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.get_inverseWhitePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve::get_inverseWhitePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_inverseWhitePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.set_inverseWhitePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::set_inverseWhitePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_inverseWhitePoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.get_x0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve::get_x0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_x0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.set_x0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::set_x0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_x0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.get_x1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve::get_x1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_x1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.set_x1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::set_x1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_x1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)()>(&::UnityEngine::Rendering::PostProcessing::HableCurve::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fbff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.Eval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::Eval)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fbf830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"Eval", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::Init)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181fbfcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"Init", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.InitSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(::UnityEngine::Rendering::PostProcessing::HableCurve_DirectParams)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::InitSegments)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181fbf8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"InitSegments", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::HableCurve_DirectParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.SolveAB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::SolveAB)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fbfee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"SolveAB", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.AsSlopeIntercept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::AsSlopeIntercept)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fbf780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"AsSlopeIntercept", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HableCurve.EvalDerivativeLinearGamma
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::HableCurve::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::HableCurve::EvalDerivativeLinearGamma)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fbf7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"EvalDerivativeLinearGamma", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__whitePoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whitePoint_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__whitePoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whitePoint_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_set__whitePoint_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whitePoint_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__inverseWhitePoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inverseWhitePoint_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__inverseWhitePoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inverseWhitePoint_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_set__inverseWhitePoint_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inverseWhitePoint_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__x0_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____x0_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__x0_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____x0_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_set__x0_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____x0_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__x1_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____x1_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get__x1_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____x1_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_set__x1_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____x1_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get_m_Segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Segments;
}
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*> const& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get_m_Segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Segments;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_set_m_Segments(::ArrayW<::UnityEngine::Rendering::PostProcessing::HableCurve_Segment*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Segments = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get_uniforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniforms;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms* const& UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_get_uniforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniforms;
}
constexpr void UnityEngine::Rendering::PostProcessing::HableCurve::__cordl_internal_set_uniforms(::UnityEngine::Rendering::PostProcessing::HableCurve_Uniforms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniforms = value;
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve::get_whitePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_whitePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::set_whitePoint(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_whitePoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve::get_inverseWhitePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_inverseWhitePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::set_inverseWhitePoint(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_inverseWhitePoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve::get_x0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_x0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::set_x0(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_x0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve::get_x1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"get_x1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::set_x1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"set_x1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve::Eval(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"Eval", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::Init(float_t  toeStrength, float_t  toeLength, float_t  shoulderStrength, float_t  shoulderLength, float_t  shoulderAngle, float_t  gamma)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"Init", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toeStrength, toeLength, shoulderStrength, shoulderLength, shoulderAngle, gamma);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::InitSegments(::UnityEngine::Rendering::PostProcessing::HableCurve_DirectParams  srcParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"InitSegments", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::HableCurve_DirectParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcParams);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::SolveAB(::by_ref<float_t>  lnA, ::by_ref<float_t>  B, float_t  x0, float_t  y0, float_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"SolveAB", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lnA, B, x0, y0, m);
}
inline void UnityEngine::Rendering::PostProcessing::HableCurve::AsSlopeIntercept(::by_ref<float_t>  m, ::by_ref<float_t>  b, float_t  x0, float_t  x1, float_t  y0, float_t  y1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"AsSlopeIntercept", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, b, x0, x1, y0, y1);
}
inline float_t UnityEngine::Rendering::PostProcessing::HableCurve::EvalDerivativeLinearGamma(float_t  m, float_t  b, float_t  g, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HableCurve*>(),
                        {"EvalDerivativeLinearGamma", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, m, b, g, x);
}
inline ::UnityEngine::Rendering::PostProcessing::HableCurve* UnityEngine::Rendering::PostProcessing::HableCurve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::HableCurve*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve::HableCurve()   {
}
