#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/VersionUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/Common/zzzz__VersionUtility_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::Common::VersionUtility.AreVersionsEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::PlayEveryWare::Common::VersionUtility::AreVersionsEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18054a670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::VersionUtility*>(),
                        {"AreVersionsEqual", {}, {::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::Common::VersionUtility::AreVersionsEqual(::System::Version*  v1, ::System::Version*  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::VersionUtility*>(),
                        {"AreVersionsEqual", {}, {::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::Common::VersionUtility::VersionUtility()   {
}
