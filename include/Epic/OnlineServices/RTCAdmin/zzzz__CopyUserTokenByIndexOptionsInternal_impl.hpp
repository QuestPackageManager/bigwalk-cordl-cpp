#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/CopyUserTokenByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>)>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f6ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>"
constexpr  Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>* Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAdmin__CopyUserTokenByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserTokenIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_QueryId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::CopyUserTokenByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_UserTokenIndex, uint32_t  m_QueryId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserTokenIndex = m_UserTokenIndex;
this->m_QueryId = m_QueryId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal::CopyUserTokenByIndexOptionsInternal()   {
}
