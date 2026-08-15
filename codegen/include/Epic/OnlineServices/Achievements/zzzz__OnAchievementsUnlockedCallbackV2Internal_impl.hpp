#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2Internal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2Internal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2InfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::*)(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::*)(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::*)(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::Invoke(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::BeginInvoke(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::EndInvoke(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal::OnAchievementsUnlockedCallbackV2Internal()   {
}
