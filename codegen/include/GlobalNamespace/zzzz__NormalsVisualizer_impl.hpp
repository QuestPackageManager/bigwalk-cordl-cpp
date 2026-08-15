#pragma once
// IWYU pragma private; include "GlobalNamespace/NormalsVisualizer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NormalsVisualizer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NormalsVisualizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NormalsVisualizer::*)()>(&::GlobalNamespace::NormalsVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NormalsVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::NormalsVisualizer::__cordl_internal_get_showNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNormals;
}
constexpr bool const& GlobalNamespace::NormalsVisualizer::__cordl_internal_get_showNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNormals;
}
constexpr void GlobalNamespace::NormalsVisualizer::__cordl_internal_set_showNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNormals = value;
}
inline void GlobalNamespace::NormalsVisualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NormalsVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NormalsVisualizer* GlobalNamespace::NormalsVisualizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NormalsVisualizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NormalsVisualizer::NormalsVisualizer()   {
}
