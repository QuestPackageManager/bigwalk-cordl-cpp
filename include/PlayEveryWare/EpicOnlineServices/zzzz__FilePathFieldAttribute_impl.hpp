#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FilePathFieldAttribute.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldAttribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FilePathFieldAttribute_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute.get_Extension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::get_Extension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*>(),
                        {"get_Extension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::*)(::StringW, ::StringW, ::StringW, int32_t)>(&::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::__cordl_internal_get__Extension_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extension_k__BackingField;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::__cordl_internal_get__Extension_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extension_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::__cordl_internal_set__Extension_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Extension_k__BackingField = value;
}
inline ::StringW PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::get_Extension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*>(),
                        {"get_Extension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::_ctor(::StringW  label, ::StringW  extension, ::StringW  tooltip, int32_t  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, extension, tooltip, group);
}
inline ::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute* PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::New_ctor(::StringW  label, ::StringW  extension, ::StringW  tooltip, int32_t  group)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*>(label, extension, tooltip, group));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute::FilePathFieldAttribute()   {
}
