#pragma once
// IWYU pragma private; include "System/Xml/IncrementalReadDummyDecoder.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__IncrementalReadDummyDecoder_def.hpp"
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IncrementalReadDummyDecoder::*)()>(&::System::Xml::IncrementalReadDummyDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(),
                    {::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IncrementalReadDummyDecoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::IncrementalReadDummyDecoder::Decode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cdb030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(),
                    {::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IncrementalReadDummyDecoder::*)()>(&::System::Xml::IncrementalReadDummyDecoder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Xml::IncrementalReadDummyDecoder::get_IsFull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::IncrementalReadDummyDecoder::Decode(::ArrayW<char16_t>  chars, int32_t  startPos, int32_t  len)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, startPos, len);
}
inline void System::Xml::IncrementalReadDummyDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::IncrementalReadDummyDecoder* System::Xml::IncrementalReadDummyDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::IncrementalReadDummyDecoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::IncrementalReadDummyDecoder::IncrementalReadDummyDecoder()   {
}
