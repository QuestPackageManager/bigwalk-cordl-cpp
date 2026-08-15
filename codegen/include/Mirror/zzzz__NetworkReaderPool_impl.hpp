#pragma once
// IWYU pragma private; include "Mirror/NetworkReaderPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkReaderPool_def.hpp"
#include "Mirror/zzzz__NetworkReaderPool_def.hpp"
#include "Mirror/zzzz__NetworkReaderPooled_def.hpp"
#include "Mirror/zzzz__Pool_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkReaderPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkReaderPool___c::*)()>(&::Mirror::NetworkReaderPool___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderPool___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkReaderPooled* (::Mirror::NetworkReaderPool___c::*)()>(&::Mirror::NetworkReaderPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181552540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkReaderPool___c::setStaticF___9(::Mirror::NetworkReaderPool___c*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkReaderPool___c*, "<>9", ::Mirror::NetworkReaderPool___c*>(std::forward<::Mirror::NetworkReaderPool___c*>(value));
}
inline ::Mirror::NetworkReaderPool___c* Mirror::NetworkReaderPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkReaderPool___c*, "<>9", ::Mirror::NetworkReaderPool___c*>();
}
inline void Mirror::NetworkReaderPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkReaderPooled* Mirror::NetworkReaderPool___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkReaderPooled*>(this, ___internal_method);
}
inline ::Mirror::NetworkReaderPool___c* Mirror::NetworkReaderPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkReaderPool___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkReaderPool___c::NetworkReaderPool___c()   {
}
//  Writing Method size for method: ::Mirror::NetworkReaderPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkReaderPooled* (*)(::ArrayW<uint8_t>)>(&::Mirror::NetworkReaderPool::Get)> {
  constexpr static std::size_t size = 0x136c0;
  constexpr static std::size_t addrs = 0x1811156a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool*>(),
                        {"Get", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkReaderPooled* (*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::NetworkReaderPool::Get)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181535920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool*>(),
                        {"Get", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkReaderPooled*)>(&::Mirror::NetworkReaderPool::Return)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18154c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool*>(),
                        {"Return", {}, {::i2c::type_of<::Mirror::NetworkReaderPooled*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkReaderPool::setStaticF_Pool(::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>*  value)  {
::cordl_internals::setStaticField<::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>*, "Pool", ::Mirror::NetworkReaderPool*>(std::forward<::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>*>(value));
}
inline ::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>* Mirror::NetworkReaderPool::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>*, "Pool", ::Mirror::NetworkReaderPool*>();
}
inline ::Mirror::NetworkReaderPooled* Mirror::NetworkReaderPool::Get(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool*>(),
                        {"Get", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkReaderPooled*>(nullptr, ___internal_method, bytes);
}
inline ::Mirror::NetworkReaderPooled* Mirror::NetworkReaderPool::Get(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool*>(),
                        {"Get", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkReaderPooled*>(nullptr, ___internal_method, segment);
}
inline void Mirror::NetworkReaderPool::Return(::Mirror::NetworkReaderPooled*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderPool*>(),
                        {"Return", {}, {::i2c::type_of<::Mirror::NetworkReaderPooled*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkReaderPool::NetworkReaderPool()   {
}
