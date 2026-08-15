#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/NextCommon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/FizzySteam/zzzz__NextCommon_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::NextCommon.SendSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (::Mirror::FizzySteam::NextCommon::*)(::Steamworks::HSteamNetConnection, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::NextCommon::SendSocket)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18062ee20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextCommon*>(),
                        {"SendSocket", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextCommon.ProcessMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::ArrayW<uint8_t>,int32_t> (::Mirror::FizzySteam::NextCommon::*)(::System::IntPtr)>(&::Mirror::FizzySteam::NextCommon::ProcessMessage)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18062ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextCommon*>(),
                        {"ProcessMessage", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextCommon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextCommon::*)()>(&::Mirror::FizzySteam::NextCommon::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextCommon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::EResult Mirror::FizzySteam::NextCommon::SendSocket(::Steamworks::HSteamNetConnection  conn, ::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextCommon*>(),
                        {"SendSocket", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(this, ___internal_method, conn, data, channelId);
}
inline ::System::ValueTuple_2<::ArrayW<uint8_t>,int32_t> Mirror::FizzySteam::NextCommon::ProcessMessage(::System::IntPtr  ptrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextCommon*>(),
                        {"ProcessMessage", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<uint8_t>,int32_t>>(this, ___internal_method, ptrs);
}
inline void Mirror::FizzySteam::NextCommon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextCommon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::NextCommon* Mirror::FizzySteam::NextCommon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::NextCommon*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextCommon::NextCommon()   {
}
