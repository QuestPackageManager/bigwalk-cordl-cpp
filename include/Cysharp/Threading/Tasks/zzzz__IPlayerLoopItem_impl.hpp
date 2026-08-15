#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IPlayerLoopItem.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IPlayerLoopItem.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::IPlayerLoopItem::*)()>(&::Cysharp::Threading::Tasks::IPlayerLoopItem::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::IPlayerLoopItem::MoveNext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
