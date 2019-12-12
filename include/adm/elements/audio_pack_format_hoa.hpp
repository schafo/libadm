/// @file audio_pack_format_hoa.hpp
#pragma once

#include "adm/elements/screen_ref.hpp"
#include "adm/elements/normalization.hpp"
#include "adm/elements/nfc_ref_dist.hpp"
#include "adm/elements/audio_pack_format.hpp"

namespace adm {

    class Document;

    class AudioPackFormatHoa : public AudioPackFormat {
     public:
        template <typename... Parameters>
        static std::shared_ptr<AudioPackFormatHoa> create(
            Parameters... optionalNamedArgs);

        /// @brief ScreenRef setter
        ADM_EXPORT void set(ScreenRef id);
        /// @brief Normalization setter
        ADM_EXPORT void set(Normalization id);
        /// @brief nfcRefDistance setter
        ADM_EXPORT void set(NfcRefDist id);

     private:
        friend class AudioPackFormatHoaAttorney; //TODO: OS what is this?
        ADM_EXPORT ScreenRef
            get(detail::ParameterTraits<ScreenRef>::tag) const;
        ADM_EXPORT ScreenRef
            get(detail::ParameterTraits<Normalization>::tag) const;
        ADM_EXPORT ScreenRef
            get(detail::ParameterTraits<NfcRefDist>::tag) const;

        ADM_EXPORT bool has(detail::ParameterTraits<ScreenRef>::tag) const;
        ADM_EXPORT bool has(detail::ParameterTraits<Normalization>::tag) const;
        ADM_EXPORT bool has(detail::ParameterTraits<NfcRefDist>::tag) const;

        ADM_EXPORT void unset(detail::ParameterTraits<ScreenRef>::tag);
        ADM_EXPORT void unset(detail::ParameterTraits<Normalization>::tag);
        ADM_EXPORT void unset(detail::ParameterTraits<NfcRefDist>::tag);

        boost::optional<ScreenRef> screenRef_;
        boost::optional<Normalization> normalization_;
        boost::optional<NfcRefDist> nfcRefDist_;
    };

    // ---- Implementation ---- //

}  // namespace adm
