#pragma once
// IWYU pragma private; include "Mirror/NetworkWriterPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkWriterPool_def.hpp"
#include "Mirror/zzzz__NetworkWriterPool_def.hpp"
#include "Mirror/zzzz__NetworkWriterPooled_def.hpp"
#include "Mirror/zzzz__Pool_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkWriterPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkWriterPool___c::*)()>(&::Mirror::NetworkWriterPool___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterPool___c.__cctor_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkWriterPooled* (::Mirror::NetworkWriterPool___c::*)()>(&::Mirror::NetworkWriterPool___c::__cctor_b__3_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181598800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkWriterPool___c::setStaticF___9(::Mirror::NetworkWriterPool___c*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkWriterPool___c*, "<>9", ::Mirror::NetworkWriterPool___c*>(std::forward<::Mirror::NetworkWriterPool___c*>(value));
}
inline ::Mirror::NetworkWriterPool___c* Mirror::NetworkWriterPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkWriterPool___c*, "<>9", ::Mirror::NetworkWriterPool___c*>();
}
inline void Mirror::NetworkWriterPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkWriterPooled* Mirror::NetworkWriterPool___c::__cctor_b__3_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkWriterPooled*>(this, ___internal_method);
}
inline ::Mirror::NetworkWriterPool___c* Mirror::NetworkWriterPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkWriterPool___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkWriterPool___c::NetworkWriterPool___c()   {
}
//  Writing Method size for method: ::Mirror::NetworkWriterPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkWriterPooled* (*)()>(&::Mirror::NetworkWriterPool::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18035c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriterPooled*)>(&::Mirror::NetworkWriterPool::Return)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18035c8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool*>(),
                        {"Return", {}, {::i2c::type_of<::Mirror::NetworkWriterPooled*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkWriterPool::setStaticF_Pool(::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>*  value)  {
::cordl_internals::setStaticField<::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>*, "Pool", ::Mirror::NetworkWriterPool*>(std::forward<::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>*>(value));
}
inline ::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>* Mirror::NetworkWriterPool::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>*, "Pool", ::Mirror::NetworkWriterPool*>();
}
inline ::Mirror::NetworkWriterPooled* Mirror::NetworkWriterPool::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkWriterPooled*>(nullptr, ___internal_method);
}
inline void Mirror::NetworkWriterPool::Return(::Mirror::NetworkWriterPooled*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterPool*>(),
                        {"Return", {}, {::i2c::type_of<::Mirror::NetworkWriterPooled*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkWriterPool::NetworkWriterPool()   {
}
