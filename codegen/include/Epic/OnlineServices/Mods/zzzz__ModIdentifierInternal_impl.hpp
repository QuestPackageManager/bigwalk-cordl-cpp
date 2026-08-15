#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModIdentifierInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifierInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModIdentifierInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModIdentifierInternal::*)(::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>)>(&::Epic::OnlineServices::Mods::ModIdentifierInternal::Get)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18050c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModIdentifierInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModIdentifierInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModIdentifierInternal::*)(::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>)>(&::Epic::OnlineServices::Mods::ModIdentifierInternal::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18050c490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModIdentifierInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModIdentifierInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModIdentifierInternal::*)()>(&::Epic::OnlineServices::Mods::ModIdentifierInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModIdentifierInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::ModIdentifierInternal::Get(::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModIdentifierInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Mods::ModIdentifierInternal::Set(::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModIdentifierInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Mods::ModIdentifierInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModIdentifierInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModIdentifier>"
constexpr  Epic::OnlineServices::Mods::ModIdentifierInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModIdentifier>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModIdentifier>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModIdentifier>* Epic::OnlineServices::Mods::ModIdentifierInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Mods__ModIdentifier_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::ModIdentifier>"
constexpr  Epic::OnlineServices::Mods::ModIdentifierInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::ModIdentifier>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::ModIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::ModIdentifier>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::ModIdentifier>* Epic::OnlineServices::Mods::ModIdentifierInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Mods__ModIdentifier_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::ModIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Mods::ModIdentifierInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Mods::ModIdentifierInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NamespaceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ItemId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArtifactId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Title", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::ModIdentifierInternal::ModIdentifierInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_NamespaceId, ::System::IntPtr  m_ItemId, ::System::IntPtr  m_ArtifactId, ::System::IntPtr  m_Title, ::System::IntPtr  m_Version) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_NamespaceId = m_NamespaceId;
this->m_ItemId = m_ItemId;
this->m_ArtifactId = m_ArtifactId;
this->m_Title = m_Title;
this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::ModIdentifierInternal::ModIdentifierInternal()   {
}
