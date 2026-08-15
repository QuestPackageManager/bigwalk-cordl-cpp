#pragma once
// IWYU pragma private; include "Mirror/LogEntry.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "Mirror/zzzz__LogEntry_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Mirror::LogEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LogEntry::*)(::StringW, ::UnityEngine::LogType)>(&::Mirror::LogEntry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f17c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::LogEntry::_ctor(::StringW  message, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, message, type);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::LogEntry::LogEntry(::StringW  message, ::UnityEngine::LogType  type) noexcept  {
this->message = message;
this->type = type;
}
// Ctor Parameters []
constexpr ::Mirror::LogEntry::LogEntry()   {
}
