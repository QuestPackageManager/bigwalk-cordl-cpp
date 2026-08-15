#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHomeSetter.hpp"
#include "GlobalNamespace/zzzz__SaveableHomeName_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropHomeSetter_def.hpp"
#include "GlobalNamespace/zzzz__PropHomeBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHomeSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeSetter::*)()>(&::GlobalNamespace::PropHomeSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHomeBlock>& GlobalNamespace::PropHomeSetter::__cordl_internal_get_propHomeBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlock;
}
constexpr ::UnityW<::GlobalNamespace::PropHomeBlock> const& GlobalNamespace::PropHomeSetter::__cordl_internal_get_propHomeBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlock;
}
constexpr void GlobalNamespace::PropHomeSetter::__cordl_internal_set_propHomeBlock(::UnityW<::GlobalNamespace::PropHomeBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomeBlock = value;
}
constexpr ::GlobalNamespace::SaveableHomeName& GlobalNamespace::PropHomeSetter::__cordl_internal_get_savableHomeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savableHomeName;
}
constexpr ::GlobalNamespace::SaveableHomeName const& GlobalNamespace::PropHomeSetter::__cordl_internal_get_savableHomeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savableHomeName;
}
constexpr void GlobalNamespace::PropHomeSetter::__cordl_internal_set_savableHomeName(::GlobalNamespace::SaveableHomeName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savableHomeName = value;
}
inline void GlobalNamespace::PropHomeSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHomeSetter* GlobalNamespace::PropHomeSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHomeSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHomeSetter::PropHomeSetter()   {
}
