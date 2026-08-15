#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/Demo/MirrorIgnorancePlayerController.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/Demo/zzzz__MirrorIgnorancePlayerController_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::*)()>(&::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803ce670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::*)()>(&::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::*)()>(&::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController* Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController::MirrorIgnorancePlayerController()   {
}
