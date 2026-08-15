#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTargetSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSet_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTarget_def.hpp"
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet.get_targetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::get_targetCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTarget* (::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::*)(int32_t)>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet.ClearElementCaches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::ClearElementCaches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Rewired::ComponentControls::Data::CustomControllerElementTargetSet::get_targetCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired::ComponentControls::Data::CustomControllerElementTargetSet::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(this, ___internal_method, index);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTargetSet::ClearElementCaches()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTargetSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet* Rewired::ComponentControls::Data::CustomControllerElementTargetSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet::CustomControllerElementTargetSet()   {
}
