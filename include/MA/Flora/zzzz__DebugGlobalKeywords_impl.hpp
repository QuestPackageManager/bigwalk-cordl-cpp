#pragma once
// IWYU pragma private; include "MA/Flora/DebugGlobalKeywords.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "MA/Flora/zzzz__DebugGlobalKeywords_def.hpp"
//  Writing Method size for method: ::MA::Flora::DebugGlobalKeywords.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::DebugGlobalKeywords::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugGlobalKeywords*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::DebugGlobalKeywords::setStaticF_DebugDisplay(::UnityEngine::Rendering::GlobalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::GlobalKeyword, "DebugDisplay", ::MA::Flora::DebugGlobalKeywords*>(std::forward<::UnityEngine::Rendering::GlobalKeyword>(value));
}
inline ::UnityEngine::Rendering::GlobalKeyword MA::Flora::DebugGlobalKeywords::getStaticF_DebugDisplay()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GlobalKeyword, "DebugDisplay", ::MA::Flora::DebugGlobalKeywords*>();
}
inline void MA::Flora::DebugGlobalKeywords::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugGlobalKeywords*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugGlobalKeywords::DebugGlobalKeywords()   {
}
