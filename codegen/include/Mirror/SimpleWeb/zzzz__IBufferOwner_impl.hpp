#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/IBufferOwner.hpp"
#include "Mirror/SimpleWeb/zzzz__IBufferOwner_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::IBufferOwner.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::IBufferOwner::*)(::Mirror::SimpleWeb::ArrayBuffer*)>(&::Mirror::SimpleWeb::IBufferOwner::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::IBufferOwner*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::IBufferOwner*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::IBufferOwner::Return(::Mirror::SimpleWeb::ArrayBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::IBufferOwner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
