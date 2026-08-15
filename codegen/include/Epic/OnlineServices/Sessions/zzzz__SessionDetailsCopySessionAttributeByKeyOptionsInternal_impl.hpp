#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsCopySessionAttributeByKeyOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsCopySessionAttributeByKeyOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsCopySessionAttributeByKeyOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>)>(&::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>"
constexpr  Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>* Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionDetailsCopySessionAttributeByKeyOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AttrKey", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::SessionDetailsCopySessionAttributeByKeyOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AttrKey) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AttrKey = m_AttrKey;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal::SessionDetailsCopySessionAttributeByKeyOptionsInternal()   {
}
