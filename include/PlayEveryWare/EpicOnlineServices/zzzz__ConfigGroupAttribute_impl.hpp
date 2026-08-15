#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ConfigGroupAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigGroupAttribute_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute.get_Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::get_Label)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {"get_Label", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute.get_Collapsible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::get_Collapsible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {"get_Collapsible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute.get_GroupLabels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::get_GroupLabels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {"get_GroupLabels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::*)(::StringW, bool)>(&::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180535980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::*)(::StringW, ::ArrayW<::StringW>, bool)>(&::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805359b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_get__Label_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_get__Label_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_set__Label_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Label_k__BackingField = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_get__Collapsible_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collapsible_k__BackingField;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_get__Collapsible_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collapsible_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_set__Collapsible_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Collapsible_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_get__GroupLabels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GroupLabels_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_get__GroupLabels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GroupLabels_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::__cordl_internal_set__GroupLabels_k__BackingField(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GroupLabels_k__BackingField = value;
}
inline ::StringW PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::get_Label()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {"get_Label", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::get_Collapsible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {"get_Collapsible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::get_GroupLabels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {"get_GroupLabels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::_ctor(::StringW  label, bool  collapsible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, collapsible);
}
inline void PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::_ctor(::StringW  label, ::ArrayW<::StringW>  groupLabels, bool  collapsible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, groupLabels, collapsible);
}
inline ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute* PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::New_ctor(::StringW  label, bool  collapsible)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(label, collapsible));
}
inline ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute* PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::New_ctor(::StringW  label, ::ArrayW<::StringW>  groupLabels, bool  collapsible)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*>(label, groupLabels, collapsible));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute::ConfigGroupAttribute()   {
}
