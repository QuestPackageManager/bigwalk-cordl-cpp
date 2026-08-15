#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSCoroutineOwner.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSCoroutineOwner_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner.StartCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner::*)(::System::Collections::IEnumerator*)>(&::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner::StartCoroutine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner::StartCoroutine(::System::Collections::IEnumerator*  routine)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
