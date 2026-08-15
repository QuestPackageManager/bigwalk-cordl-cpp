#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5VoiceChatManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PS5VoiceChatManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5VoiceChatManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PS5VoiceChatManager::*)()>(&::GlobalNamespace::PS5VoiceChatManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PS5VoiceChatManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PS5VoiceChatManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PS5VoiceChatManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5VoiceChatManager* GlobalNamespace::PS5VoiceChatManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PS5VoiceChatManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5VoiceChatManager::PS5VoiceChatManager()   {
}
