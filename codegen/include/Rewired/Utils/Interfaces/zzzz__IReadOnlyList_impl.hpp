#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IReadOnlyList.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IReadOnlyList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IReadOnlyList.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Interfaces::IReadOnlyList::*)()>(&::Rewired::Utils::Interfaces::IReadOnlyList::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IReadOnlyList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Interfaces::IReadOnlyList::*)(int32_t)>(&::Rewired::Utils::Interfaces::IReadOnlyList::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IReadOnlyList.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Interfaces::IReadOnlyList::*)(::System::Object*)>(&::Rewired::Utils::Interfaces::IReadOnlyList::IndexOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IReadOnlyList.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Interfaces::IReadOnlyList::*)(::System::Object*)>(&::Rewired::Utils::Interfaces::IReadOnlyList::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 3}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::Utils::Interfaces::IReadOnlyList::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* Rewired::Utils::Interfaces::IReadOnlyList::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline int32_t Rewired::Utils::Interfaces::IReadOnlyList::IndexOf(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline bool Rewired::Utils::Interfaces::IReadOnlyList::Contains(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
