#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/Hdrp/PostProcessingSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rowlan/Genesis/Ambience/Hdrp/zzzz__PostProcessingSetup_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup::*)()>(&::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup* Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup::PostProcessingSetup()   {
}
