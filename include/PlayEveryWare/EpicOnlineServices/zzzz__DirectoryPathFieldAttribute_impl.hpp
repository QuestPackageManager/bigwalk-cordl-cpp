#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/DirectoryPathFieldAttribute.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldAttribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__DirectoryPathFieldAttribute_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute::*)(::StringW, ::StringW, int32_t)>(&::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180537700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute::_ctor(::StringW  label, ::StringW  tooltip, int32_t  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, tooltip, group);
}
inline ::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute* PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute::New_ctor(::StringW  label, ::StringW  tooltip, int32_t  group)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute*>(label, tooltip, group));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute::DirectoryPathFieldAttribute()   {
}
