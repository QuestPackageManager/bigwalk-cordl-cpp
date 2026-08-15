#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/GetNextReceivedPacketSizeOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetNextReceivedPacketSizeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetNextReceivedPacketSizeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>)>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18052e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::*)(::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>)>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18052e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::Set(::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>"
constexpr  Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>* Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__GetNextReceivedPacketSizeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RequestedChannel", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::GetNextReceivedPacketSizeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RequestedChannel) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_RequestedChannel = m_RequestedChannel;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal::GetNextReceivedPacketSizeOptionsInternal()   {
}
