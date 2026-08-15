#pragma once
// IWYU pragma private; include "GlobalNamespace/AspectHanger.hpp"
#include "GlobalNamespace/zzzz__SettingsType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AspectHanger_def.hpp"
#include "GlobalNamespace/zzzz__AspectHanger_def.hpp"
#include "GlobalNamespace/zzzz__ISettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AspectHanger_AspectRatio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger_AspectRatio::*)(int32_t, int32_t)>(&::GlobalNamespace::AspectHanger_AspectRatio::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803914e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger_AspectRatio>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger_AspectRatio.get_ratio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AspectHanger_AspectRatio::*)()>(&::GlobalNamespace::AspectHanger_AspectRatio::get_ratio)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180391560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger_AspectRatio>(),
                        {"get_ratio", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AspectHanger_AspectRatio::_ctor(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger_AspectRatio>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height);
}
inline float_t GlobalNamespace::AspectHanger_AspectRatio::get_ratio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger_AspectRatio>(),
                        {"get_ratio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "isUsable", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AspectHanger_AspectRatio::AspectHanger_AspectRatio(int32_t  width, int32_t  height, ::StringW  label, bool  isUsable) noexcept  {
this->width = width;
this->height = height;
this->label = label;
this->isUsable = isUsable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AspectHanger_AspectRatio::AspectHanger_AspectRatio()   {
}
//  Writing Method size for method: ::GlobalNamespace::AspectHanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::_ctor)> {
  constexpr static std::size_t size = 0xd50;
  constexpr static std::size_t addrs = 0x180390710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.get_overflowIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::get_overflowIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_overflowIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.get_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsType (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::get_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.set_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)(::GlobalNamespace::SettingsType)>(&::GlobalNamespace::AspectHanger::set_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.MatchesRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Resolution, ::GlobalNamespace::AspectHanger_AspectRatio)>(&::GlobalNamespace::AspectHanger::MatchesRatio)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803904a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"MatchesRatio", {}, {::i2c::type_of<::UnityEngine::Resolution>(), ::i2c::type_of<::GlobalNamespace::AspectHanger_AspectRatio>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.MatchesCurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AspectHanger::*)(::UnityEngine::Resolution)>(&::GlobalNamespace::AspectHanger::MatchesCurrentValue)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803902e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"MatchesCurrentValue", {}, {::i2c::type_of<::UnityEngine::Resolution>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.RefreshWhichAspectsAreUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::RefreshWhichAspectsAreUsable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180390520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"RefreshWhichAspectsAreUsable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.IsAtMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::IsAtMaxValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803901e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.IsAtMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::IsAtMinValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180390260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.get_aspectRatioValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AspectHanger_AspectRatio (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::get_aspectRatioValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180391460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_aspectRatioValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.Cycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)(int32_t)>(&::GlobalNamespace::AspectHanger::Cycle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180390050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::Apply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.GetLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AspectHanger::*)(::by_ref<::GlobalNamespace::LocalizedText_DisplayType>)>(&::GlobalNamespace::AspectHanger::GetLabel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180390140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"GetLabel", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalizedText_DisplayType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::ResetToDefault)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::Load)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.SetValueByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)(int32_t)>(&::GlobalNamespace::AspectHanger::SetValueByIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::get_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)(int32_t)>(&::GlobalNamespace::AspectHanger::set_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.get_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AspectHanger::*)()>(&::GlobalNamespace::AspectHanger::get_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AspectHanger.set_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AspectHanger::*)(int32_t)>(&::GlobalNamespace::AspectHanger::set_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio>& GlobalNamespace::AspectHanger::__cordl_internal_get_possibleRatios()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleRatios;
}
constexpr ::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio> const& GlobalNamespace::AspectHanger::__cordl_internal_get_possibleRatios() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleRatios;
}
constexpr void GlobalNamespace::AspectHanger::__cordl_internal_set_possibleRatios(::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___possibleRatios = value;
}
constexpr bool& GlobalNamespace::AspectHanger::__cordl_internal_get_usingOverflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingOverflow;
}
constexpr bool const& GlobalNamespace::AspectHanger::__cordl_internal_get_usingOverflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingOverflow;
}
constexpr void GlobalNamespace::AspectHanger::__cordl_internal_set_usingOverflow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usingOverflow = value;
}
constexpr ::StringW& GlobalNamespace::AspectHanger::__cordl_internal_get_overflowLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overflowLabel;
}
constexpr ::StringW const& GlobalNamespace::AspectHanger::__cordl_internal_get_overflowLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overflowLabel;
}
constexpr void GlobalNamespace::AspectHanger::__cordl_internal_set_overflowLabel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overflowLabel = value;
}
constexpr ::GlobalNamespace::SettingsType& GlobalNamespace::AspectHanger::__cordl_internal_get__settingsType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr ::GlobalNamespace::SettingsType const& GlobalNamespace::AspectHanger::__cordl_internal_get__settingsType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr void GlobalNamespace::AspectHanger::__cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsType_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AspectHanger::__cordl_internal_get__value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AspectHanger::__cordl_internal_get__value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr void GlobalNamespace::AspectHanger::__cordl_internal_set__value_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AspectHanger::__cordl_internal_get__valueIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AspectHanger::__cordl_internal_get__valueIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueIndex_k__BackingField;
}
constexpr void GlobalNamespace::AspectHanger::__cordl_internal_set__valueIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueIndex_k__BackingField = value;
}
inline void GlobalNamespace::AspectHanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AspectHanger::get_overflowIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_overflowIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsType GlobalNamespace::AspectHanger::get_settingsType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsType>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::set_settingsType(::GlobalNamespace::SettingsType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AspectHanger::MatchesRatio(::UnityEngine::Resolution  resolution, ::GlobalNamespace::AspectHanger_AspectRatio  aspectRatio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"MatchesRatio", {}, {::i2c::type_of<::UnityEngine::Resolution>(), ::i2c::type_of<::GlobalNamespace::AspectHanger_AspectRatio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resolution, aspectRatio);
}
inline bool GlobalNamespace::AspectHanger::MatchesCurrentValue(::UnityEngine::Resolution  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"MatchesCurrentValue", {}, {::i2c::type_of<::UnityEngine::Resolution>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resolution);
}
inline void GlobalNamespace::AspectHanger::RefreshWhichAspectsAreUsable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"RefreshWhichAspectsAreUsable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AspectHanger::IsAtMaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AspectHanger::IsAtMinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::AspectHanger_AspectRatio GlobalNamespace::AspectHanger::get_aspectRatioValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_aspectRatioValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AspectHanger_AspectRatio>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::Cycle(int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline void GlobalNamespace::AspectHanger::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AspectHanger::GetLabel(::by_ref<::GlobalNamespace::LocalizedText_DisplayType>  displayType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"GetLabel", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalizedText_DisplayType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, displayType);
}
inline void GlobalNamespace::AspectHanger::ResetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::SetValueByIndex(int32_t  valueIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueIndex);
}
inline int32_t GlobalNamespace::AspectHanger::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::set_value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::AspectHanger::get_valueIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AspectHanger::set_valueIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AspectHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AspectHanger* GlobalNamespace::AspectHanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AspectHanger*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr  GlobalNamespace::AspectHanger::operator ::GlobalNamespace::ISettingsHanger*() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* GlobalNamespace::AspectHanger::i___GlobalNamespace__ISettingsHanger() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AspectHanger::AspectHanger()   {
}
