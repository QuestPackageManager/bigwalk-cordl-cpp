#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Extensions/ListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/Common/Extensions/zzzz__ListExtensions_def.hpp"
#include "PlayEveryWare/Common/Extensions/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::*)()>(&::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c.__cctor_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Random* (::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::*)()>(&::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::__cctor_b__3_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180548f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::setStaticF___9(::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*, "<>9", ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>(std::forward<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>(value));
}
inline ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c* PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*, "<>9", ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>();
}
inline void PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Random* PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::__cctor_b__3_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Random*>(this, ___internal_method);
}
inline ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c* PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c::ThreadSafeRandom_ListExtensions___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Random* (*)()>(&::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom::get_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180547530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom::setStaticF_threadLocalRandom(::System::Threading::ThreadLocal_1<::System::Random*>*  value)  {
::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1<::System::Random*>*, "threadLocalRandom", ::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom*>(std::forward<::System::Threading::ThreadLocal_1<::System::Random*>*>(value));
}
inline ::System::Threading::ThreadLocal_1<::System::Random*>* PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom::getStaticF_threadLocalRandom()  {
return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1<::System::Random*>*, "threadLocalRandom", ::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom*>();
}
inline ::System::Random* PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Random*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom::ListExtensions_ThreadSafeRandom()   {
}
template<typename T>
inline void PlayEveryWare::Common::Extensions::ListExtensions::Shuffle(::System::Collections::Generic::IList_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::Common::Extensions::ListExtensions*>(),
                    {"Shuffle", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::Common::Extensions::ListExtensions::ListExtensions()   {
}
