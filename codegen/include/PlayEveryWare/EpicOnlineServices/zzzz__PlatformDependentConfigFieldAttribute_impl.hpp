#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformDependentConfigFieldAttribute.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformDependentConfigFieldAttribute_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldType_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute.get_Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_Label)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_Label", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute.get_ToolTip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_ToolTip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_ToolTip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute.get_Group
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_Group)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_Group", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute.get_FieldType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::ConfigFieldType (::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_FieldType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_FieldType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, ::StringW, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType, ::StringW, int32_t)>(&::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180543670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ConfigFieldType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__Label_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__Label_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_set__Label_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Label_k__BackingField = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__ToolTip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ToolTip_k__BackingField;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__ToolTip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ToolTip_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_set__ToolTip_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ToolTip_k__BackingField = value;
}
constexpr int32_t& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__Group_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Group_k__BackingField;
}
constexpr int32_t const& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__Group_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Group_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_set__Group_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Group_k__BackingField = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::ConfigFieldType& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__FieldType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FieldType_k__BackingField;
}
constexpr ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const& PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_get__FieldType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FieldType_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::__cordl_internal_set__FieldType_k__BackingField(::PlayEveryWare::EpicOnlineServices::ConfigFieldType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FieldType_k__BackingField = value;
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_Label()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_Label", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_ToolTip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_ToolTip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_Group()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_Group", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ConfigFieldType PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::get_FieldType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {"get_FieldType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::ConfigFieldType>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  supportedPlatforms, ::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ConfigFieldType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportedPlatforms, label, type, tooltip, group);
}
inline ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute* PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::New_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  supportedPlatforms, ::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*>(supportedPlatforms, label, type, tooltip, group));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute::PlatformDependentConfigFieldAttribute()   {
}
