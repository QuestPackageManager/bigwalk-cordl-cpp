#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnRoomStatisticsUpdatedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomStatisticsUpdatedCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RoomStatisticsUpdatedInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::*)(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>)>(&::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::*)(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::*)(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::Invoke(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback* Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback::OnRoomStatisticsUpdatedCallback()   {
}
