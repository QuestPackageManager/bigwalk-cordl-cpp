#pragma once
// IWYU pragma private; include "GlobalNamespace/ResolutionHanger.hpp"
#include "GlobalNamespace/zzzz__SettingsType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Resolution_impl.hpp"
#include "GlobalNamespace/zzzz__ResolutionHanger_def.hpp"
#include "GlobalNamespace/zzzz__ISettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180396eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.get_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsType (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::get_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.set_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)(::GlobalNamespace::SettingsType)>(&::GlobalNamespace::ResolutionHanger::set_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.MatchesHeightAndWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ResolutionHanger::*)(::UnityEngine::Resolution, ::UnityEngine::Resolution)>(&::GlobalNamespace::ResolutionHanger::MatchesHeightAndWidth)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180396cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"MatchesHeightAndWidth", {}, {::i2c::type_of<::UnityEngine::Resolution>(), ::i2c::type_of<::UnityEngine::Resolution>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.ResolutionMatchesFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ResolutionHanger::*)(::UnityEngine::Resolution)>(&::GlobalNamespace::ResolutionHanger::ResolutionMatchesFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"ResolutionMatchesFilter", {}, {::i2c::type_of<::UnityEngine::Resolution>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.IsAtMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::IsAtMaxValue)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180396a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.IsAtMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::IsAtMinValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180396c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.Cycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)(int32_t)>(&::GlobalNamespace::ResolutionHanger::Cycle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803968c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.ResetAfterAspectChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::ResetAfterAspectChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180396d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"ResetAfterAspectChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::Apply)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180396870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.GetLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::GetLabel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180396a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"GetLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::ResetToDefault)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::Load)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.SetValueByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)(int32_t)>(&::GlobalNamespace::ResolutionHanger::SetValueByIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::get_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)(int32_t)>(&::GlobalNamespace::ResolutionHanger::set_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.get_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ResolutionHanger::*)()>(&::GlobalNamespace::ResolutionHanger::get_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResolutionHanger.set_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResolutionHanger::*)(int32_t)>(&::GlobalNamespace::ResolutionHanger::set_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Resolution& GlobalNamespace::ResolutionHanger::__cordl_internal_get_resolutionValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionValue;
}
constexpr ::UnityEngine::Resolution const& GlobalNamespace::ResolutionHanger::__cordl_internal_get_resolutionValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionValue;
}
constexpr void GlobalNamespace::ResolutionHanger::__cordl_internal_set_resolutionValue(::UnityEngine::Resolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolutionValue = value;
}
constexpr ::GlobalNamespace::SettingsType& GlobalNamespace::ResolutionHanger::__cordl_internal_get__settingsType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr ::GlobalNamespace::SettingsType const& GlobalNamespace::ResolutionHanger::__cordl_internal_get__settingsType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr void GlobalNamespace::ResolutionHanger::__cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsType_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ResolutionHanger::__cordl_internal_get__value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ResolutionHanger::__cordl_internal_get__value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr void GlobalNamespace::ResolutionHanger::__cordl_internal_set__value_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ResolutionHanger::__cordl_internal_get__valueIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ResolutionHanger::__cordl_internal_get__valueIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueIndex_k__BackingField;
}
constexpr void GlobalNamespace::ResolutionHanger::__cordl_internal_set__valueIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueIndex_k__BackingField = value;
}
inline void GlobalNamespace::ResolutionHanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsType GlobalNamespace::ResolutionHanger::get_settingsType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsType>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::set_settingsType(::GlobalNamespace::SettingsType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ResolutionHanger::MatchesHeightAndWidth(::UnityEngine::Resolution  a, ::UnityEngine::Resolution  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"MatchesHeightAndWidth", {}, {::i2c::type_of<::UnityEngine::Resolution>(), ::i2c::type_of<::UnityEngine::Resolution>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline bool GlobalNamespace::ResolutionHanger::ResolutionMatchesFilter(::UnityEngine::Resolution  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"ResolutionMatchesFilter", {}, {::i2c::type_of<::UnityEngine::Resolution>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resolution);
}
inline bool GlobalNamespace::ResolutionHanger::IsAtMaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ResolutionHanger::IsAtMinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::Cycle(int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline void GlobalNamespace::ResolutionHanger::ResetAfterAspectChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"ResetAfterAspectChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ResolutionHanger::GetLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"GetLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::ResetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::SetValueByIndex(int32_t  valueIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueIndex);
}
inline int32_t GlobalNamespace::ResolutionHanger::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::set_value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ResolutionHanger::get_valueIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ResolutionHanger::set_valueIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResolutionHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ResolutionHanger* GlobalNamespace::ResolutionHanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ResolutionHanger*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr  GlobalNamespace::ResolutionHanger::operator ::GlobalNamespace::ISettingsHanger*() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* GlobalNamespace::ResolutionHanger::i___GlobalNamespace__ISettingsHanger() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResolutionHanger::ResolutionHanger()   {
}
