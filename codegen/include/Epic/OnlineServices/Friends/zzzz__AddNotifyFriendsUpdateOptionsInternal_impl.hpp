#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/AddNotifyFriendsUpdateOptionsInternal.hpp"
#include "Epic/OnlineServices/Friends/zzzz__AddNotifyFriendsUpdateOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__AddNotifyFriendsUpdateOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>)>(&::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::*)()>(&::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>"
constexpr  Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>* Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Friends__AddNotifyFriendsUpdateOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::AddNotifyFriendsUpdateOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal::AddNotifyFriendsUpdateOptionsInternal()   {
}
