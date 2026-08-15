#pragma once
// IWYU pragma private; include "Tayx/Graphy/G_GraphShader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Tayx/Graphy/zzzz__G_GraphShader_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader.InitializeShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::InitializeShader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e51330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"InitializeShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader.UpdateArrayValuesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::UpdateArrayValuesLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e513b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateArrayValuesLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader.UpdateAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::UpdateAverage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e51410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateAverage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader.UpdateThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::UpdateThresholds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e515e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader.UpdateColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::UpdateColors)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181e51470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader.UpdatePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::UpdatePoints)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e51580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdatePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::G_GraphShader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::G_GraphShader::*)()>(&::Tayx::Graphy::G_GraphShader::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e51790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::G_GraphShader::__cordl_internal_get_ArrayMaxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArrayMaxSize;
}
constexpr int32_t const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_ArrayMaxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArrayMaxSize;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_ArrayMaxSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ArrayMaxSize = value;
}
constexpr ::ArrayW<float_t>& Tayx::Graphy::G_GraphShader::__cordl_internal_get_ShaderArrayValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShaderArrayValues;
}
constexpr ::ArrayW<float_t> const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_ShaderArrayValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShaderArrayValues;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_ShaderArrayValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShaderArrayValues = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Tayx::Graphy::G_GraphShader::__cordl_internal_get_Image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_Image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Image;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_Image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Image = value;
}
constexpr float_t& Tayx::Graphy::G_GraphShader::__cordl_internal_get_Average()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Average;
}
constexpr float_t const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_Average() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Average;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_Average(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Average = value;
}
constexpr float_t& Tayx::Graphy::G_GraphShader::__cordl_internal_get_GoodThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodThreshold;
}
constexpr float_t const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_GoodThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodThreshold;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_GoodThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoodThreshold = value;
}
constexpr float_t& Tayx::Graphy::G_GraphShader::__cordl_internal_get_CautionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CautionThreshold;
}
constexpr float_t const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_CautionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CautionThreshold;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_CautionThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CautionThreshold = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::G_GraphShader::__cordl_internal_get_GoodColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_GoodColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodColor;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_GoodColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoodColor = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::G_GraphShader::__cordl_internal_get_CautionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CautionColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_CautionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CautionColor;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_CautionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CautionColor = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::G_GraphShader::__cordl_internal_get_CriticalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CriticalColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::G_GraphShader::__cordl_internal_get_CriticalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CriticalColor;
}
constexpr void Tayx::Graphy::G_GraphShader::__cordl_internal_set_CriticalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CriticalColor = value;
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_AveragePropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "AveragePropertyId", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_AveragePropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "AveragePropertyId", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_GoodThresholdPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "GoodThresholdPropertyId", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_GoodThresholdPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "GoodThresholdPropertyId", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_CautionThresholdPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CautionThresholdPropertyId", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_CautionThresholdPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "CautionThresholdPropertyId", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_GoodColorPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "GoodColorPropertyId", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_GoodColorPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "GoodColorPropertyId", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_CautionColorPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CautionColorPropertyId", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_CautionColorPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "CautionColorPropertyId", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_CriticalColorPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CriticalColorPropertyId", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_CriticalColorPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "CriticalColorPropertyId", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_GraphValues(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "GraphValues", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_GraphValues()  {
return ::cordl_internals::getStaticField<int32_t, "GraphValues", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::setStaticF_GraphValuesLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "GraphValuesLength", ::Tayx::Graphy::G_GraphShader*>(std::forward<int32_t>(value));
}
inline int32_t Tayx::Graphy::G_GraphShader::getStaticF_GraphValuesLength()  {
return ::cordl_internals::getStaticField<int32_t, "GraphValuesLength", ::Tayx::Graphy::G_GraphShader*>();
}
inline void Tayx::Graphy::G_GraphShader::InitializeShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"InitializeShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::G_GraphShader::UpdateArrayValuesLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateArrayValuesLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::G_GraphShader::UpdateAverage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateAverage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::G_GraphShader::UpdateThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::G_GraphShader::UpdateColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdateColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::G_GraphShader::UpdatePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {"UpdatePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::G_GraphShader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Tayx::Graphy::G_GraphShader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::G_GraphShader* Tayx::Graphy::G_GraphShader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::G_GraphShader*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::G_GraphShader::G_GraphShader()   {
}
