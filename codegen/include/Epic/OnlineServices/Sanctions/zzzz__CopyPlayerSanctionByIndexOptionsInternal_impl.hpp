#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CopyPlayerSanctionByIndexOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CopyPlayerSanctionByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CopyPlayerSanctionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>)>(&::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e72b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>"
constexpr  Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>* Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sanctions__CopyPlayerSanctionByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SanctionIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::CopyPlayerSanctionByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, uint32_t  m_SanctionIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TargetUserId = m_TargetUserId;
this->m_SanctionIndex = m_SanctionIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal::CopyPlayerSanctionByIndexOptionsInternal()   {
}
