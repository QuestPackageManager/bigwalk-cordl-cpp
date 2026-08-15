#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/HashUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__HashUtility_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::HashUtility.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::Object*>)>(&::PlayEveryWare::EpicOnlineServices::Utility::HashUtility::Combine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805409e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::HashUtility*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t PlayEveryWare::EpicOnlineServices::Utility::HashUtility::Combine(::ArrayW<::System::Object*>  fields)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::HashUtility*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fields);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::HashUtility::HashUtility()   {
}
