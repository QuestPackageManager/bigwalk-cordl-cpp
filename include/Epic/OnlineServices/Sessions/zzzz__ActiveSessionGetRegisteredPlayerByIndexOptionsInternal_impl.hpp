#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionGetRegisteredPlayerByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionGetRegisteredPlayerByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionGetRegisteredPlayerByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>)>(&::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>"
constexpr  Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>* Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__ActiveSessionGetRegisteredPlayerByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayerIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_PlayerIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PlayerIndex = m_PlayerIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal()   {
}
