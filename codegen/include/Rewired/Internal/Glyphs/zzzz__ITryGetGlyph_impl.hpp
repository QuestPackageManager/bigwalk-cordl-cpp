#pragma once
// IWYU pragma private; include "Rewired/Internal/Glyphs/ITryGetGlyph.hpp"
#include "Rewired/Internal/Glyphs/zzzz__ITryGetGlyph_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::Glyphs::ITryGetGlyph.TryGetGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::Glyphs::ITryGetGlyph::*)(::by_ref<::System::Object*>)>(&::Rewired::Internal::Glyphs::ITryGetGlyph::TryGetGlyph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::Glyphs::ITryGetGlyph*>(),
                    {::i2c::class_of<::Rewired::Internal::Glyphs::ITryGetGlyph*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Internal::Glyphs::ITryGetGlyph::TryGetGlyph(::by_ref<::System::Object*>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::Glyphs::ITryGetGlyph*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
