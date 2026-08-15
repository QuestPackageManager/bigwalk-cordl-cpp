#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/CopyStatByNameOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__CopyStatByNameOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__CopyStatByNameOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>)>(&::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804d7930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::*)()>(&::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>"
constexpr  Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>* Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__CopyStatByNameOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::CopyStatByNameOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_Name) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TargetUserId = m_TargetUserId;
this->m_Name = m_Name;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal::CopyStatByNameOptionsInternal()   {
}
