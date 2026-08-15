#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSInitializeOptions.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSInitializeOptions_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Platform::InitializeOptions& PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::Epic::OnlineServices::Platform::InitializeOptions const& PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::__cordl_internal_set_options(::Epic::OnlineServices::Platform::InitializeOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions* PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions::EOSInitializeOptions()   {
}
