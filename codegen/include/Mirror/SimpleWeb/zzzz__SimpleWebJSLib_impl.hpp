#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebJSLib.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebJSLib_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebJSLib.IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebJSLib::IsConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"IsConnected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebJSLib.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::System::Action_1<int32_t>*, ::System::Action_1<int32_t>*, ::System::Action_3<int32_t,::System::IntPtr,int32_t>*, ::System::Action_1<int32_t>*)>(&::Mirror::SimpleWeb::SimpleWebJSLib::Connect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_3<int32_t,::System::IntPtr,int32_t>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebJSLib.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebJSLib::Disconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebJSLib.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::SimpleWebJSLib::Send)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Mirror::SimpleWeb::SimpleWebJSLib::IsConnected(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"IsConnected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index);
}
inline int32_t Mirror::SimpleWeb::SimpleWebJSLib::Connect(::StringW  address, ::System::Action_1<int32_t>*  openCallback, ::System::Action_1<int32_t>*  closeCallBack, ::System::Action_3<int32_t,::System::IntPtr,int32_t>*  messageCallback, ::System::Action_1<int32_t>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_3<int32_t,::System::IntPtr,int32_t>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, address, openCallback, closeCallBack, messageCallback, errorCallback);
}
inline void Mirror::SimpleWeb::SimpleWebJSLib::Disconnect(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
inline bool Mirror::SimpleWeb::SimpleWebJSLib::Send(int32_t  index, ::ArrayW<uint8_t>  array, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebJSLib*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, array, offset, length);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SimpleWebJSLib::SimpleWebJSLib()   {
}
