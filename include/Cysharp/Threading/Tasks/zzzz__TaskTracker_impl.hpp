#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TaskTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskTracker_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__WeakDictionary_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TaskTracker.TrackActiveTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskSource*, int32_t)>(&::Cysharp::Threading::Tasks::TaskTracker::TrackActiveTask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"TrackActiveTask", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TaskTracker.RemoveTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskSource*)>(&::Cysharp::Threading::Tasks::TaskTracker::RemoveTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"RemoveTracking", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TaskTracker.CheckAndResetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Cysharp::Threading::Tasks::TaskTracker::CheckAndResetDirty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e632e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"CheckAndResetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TaskTracker.ForEachActiveTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_5<int32_t,::StringW,::Cysharp::Threading::Tasks::UniTaskStatus,::System::DateTime,::StringW>*)>(&::Cysharp::Threading::Tasks::TaskTracker::ForEachActiveTask)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x181e63320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"ForEachActiveTask", {}, {::i2c::type_of<::System::Action_5<int32_t,::StringW,::Cysharp::Threading::Tasks::UniTaskStatus,::System::DateTime,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TaskTracker.TypeBeautify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Text::StringBuilder*)>(&::Cysharp::Threading::Tasks::TaskTracker::TypeBeautify)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181e63760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"TypeBeautify", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::TaskTracker::setStaticF_listPool(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>*, "listPool", ::Cysharp::Threading::Tasks::TaskTracker*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>* Cysharp::Threading::Tasks::TaskTracker::getStaticF_listPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>*, "listPool", ::Cysharp::Threading::Tasks::TaskTracker*>();
}
inline void Cysharp::Threading::Tasks::TaskTracker::setStaticF_tracking(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>*, "tracking", ::Cysharp::Threading::Tasks::TaskTracker*>(std::forward<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>*>(value));
}
inline ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>* Cysharp::Threading::Tasks::TaskTracker::getStaticF_tracking()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>*, "tracking", ::Cysharp::Threading::Tasks::TaskTracker*>();
}
inline void Cysharp::Threading::Tasks::TaskTracker::setStaticF_dirty(bool  value)  {
::cordl_internals::setStaticField<bool, "dirty", ::Cysharp::Threading::Tasks::TaskTracker*>(std::forward<bool>(value));
}
inline bool Cysharp::Threading::Tasks::TaskTracker::getStaticF_dirty()  {
return ::cordl_internals::getStaticField<bool, "dirty", ::Cysharp::Threading::Tasks::TaskTracker*>();
}
inline void Cysharp::Threading::Tasks::TaskTracker::TrackActiveTask(::Cysharp::Threading::Tasks::IUniTaskSource*  task, int32_t  skipFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"TrackActiveTask", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task, skipFrame);
}
inline void Cysharp::Threading::Tasks::TaskTracker::RemoveTracking(::Cysharp::Threading::Tasks::IUniTaskSource*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"RemoveTracking", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline bool Cysharp::Threading::Tasks::TaskTracker::CheckAndResetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"CheckAndResetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Cysharp::Threading::Tasks::TaskTracker::ForEachActiveTask(::System::Action_5<int32_t,::StringW,::Cysharp::Threading::Tasks::UniTaskStatus,::System::DateTime,::StringW>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"ForEachActiveTask", {}, {::i2c::type_of<::System::Action_5<int32_t,::StringW,::Cysharp::Threading::Tasks::UniTaskStatus,::System::DateTime,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void Cysharp::Threading::Tasks::TaskTracker::TypeBeautify(::System::Type*  type, ::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskTracker*>(),
                        {"TypeBeautify", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, sb);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::TaskTracker::TaskTracker()   {
}
