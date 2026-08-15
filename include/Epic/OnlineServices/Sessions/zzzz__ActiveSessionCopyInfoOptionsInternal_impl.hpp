#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionCopyInfoOptionsInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionCopyInfoOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionCopyInfoOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>)>(&::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>"
constexpr  Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>* Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__ActiveSessionCopyInfoOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::ActiveSessionCopyInfoOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal::ActiveSessionCopyInfoOptionsInternal()   {
}
