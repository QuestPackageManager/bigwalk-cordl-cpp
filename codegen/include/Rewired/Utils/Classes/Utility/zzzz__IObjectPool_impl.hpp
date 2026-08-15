#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/IObjectPool.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IObjectPool_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::IObjectPool.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::IObjectPool::*)(bool)>(&::Rewired::Utils::Classes::Utility::IObjectPool::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::IObjectPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Classes::Utility::IObjectPool::*)()>(&::Rewired::Utils::Classes::Utility::IObjectPool::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::IObjectPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::IObjectPool::*)(::System::Object*)>(&::Rewired::Utils::Classes::Utility::IObjectPool::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Utility::IObjectPool::Clear(bool  reduceSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reduceSize);
}
inline ::System::Object* Rewired::Utils::Classes::Utility::IObjectPool::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Utility::IObjectPool::Return(::System::Object*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
